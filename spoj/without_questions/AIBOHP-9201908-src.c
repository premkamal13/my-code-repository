#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

char str[10001];
int c[5001][5001];

int max(int a,int b)
{
    return (a>b?a:b);
}

int maxpalsubseq(int n)
{
    int i,l,j;
    for(i=0;i<=n;i++)
    {
        c[i][i]=1;
    }
    for(l=2;l<=n;l++)
    {
        for(i=0;i<n-l+1;i++)
        {
            j=i+l-1;
            if(str[i]==str[j])
            {
                if(i+1==j) c[i][j]=2;
                else c[i][j]=c[i+1][j-1]+2;
            }
            else
            {
                c[i][j]=max(c[i+1][j],c[i][j-1]);
            }
        }
    }
    return c[0][n-1];
}

int main()
{
    int t,x,p;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",str);
        x=strlen(str);
        p=maxpalsubseq(x);
        printf("%d\n",x-p);
    }
    return 0;
}
