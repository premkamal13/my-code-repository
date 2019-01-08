#include<stdio.h>
#include<stdlib.h>
#define INF 100000001
int min(int x,int y)
{
    return (x<y?x:y);
}

int a[101][101],m[101];
int main()
{
    int i,j,k,ing,rec,maxm,type,count;
    while(scanf("%d%d",&ing,&rec),ing!=0)
    {
    for(i=0;i<ing;i++)
    {
        scanf("%d",&m[i]);
        m[i]*=10;
    }
    for(i=0;i<rec;i++)
    {
        for(j=0;j<ing;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    maxm=-1;
    type=-1;
    for(j=0;j<rec;j++)
    {
        count=INF;
        for(k=0;k<ing;k++)
        {
            if(a[j][k]!=0)
            count=min(count,m[k]/a[j][k]);
        }
        if(count>maxm)
        {
            maxm=count;
            type=j+1;
        }
    }
    printf("%d %d\n",type,maxm);
    }
    return 0;
}
