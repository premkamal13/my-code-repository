#include<stdio.h>
#include<stdlib.h>
#define int_max 20000001

int col[101],smokedp[101][101],newcol[101][101];

int min1(int a,int b)
{
    return(a<b?a:b);
}

int smoke(int m,int n)
{
    int i;
    if(smokedp[m][n]>-1) return smokedp[m][n];
    smokedp[m][n]=int_max;
    for(i=m;i<n;i++)
    {
        smokedp[m][n]=min1(smokedp[m][n],(smoke(m,i)+smoke(i+1,n)+newcol[m][i]*newcol[i+1][n]));
    }
    return smokedp[m][n];
}

int dpsmoke(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            smokedp[i][j]=-1;
        }
        smokedp[i][i]=0;
    }
    for(i=0;i<n;i++)
    {
        newcol[i][i]=col[i];
        for(j=i+1;j<n;j++)
        {
            newcol[i][j]=(newcol[i][j-1]+col[j])%100;
        }
    }
    return smoke(0,n-1);
}

int main()
{
    int n,i;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++) scanf("%d",&col[i]);
        printf("%d\n",dpsmoke(n));
    }
    return 0;
}
