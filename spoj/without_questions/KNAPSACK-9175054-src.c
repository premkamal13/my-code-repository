#include<stdio.h>
#include<stdlib.h>

int wt[2001],val[2001],k[2001][2001];

int max1(int a,int b)
{
    return((a>b)?a:b);
}

int knapsack(int w,int n)
{
    int j,i;
    for(i=0;i<=n;i++) k[i][0]=0;
    for(j=0;j<=w;j++) k[0][j]=0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=w;j++)
        {
            if(wt[i-1]>j) k[i][j]=k[i-1][j];
            else k[i][j]=max1((val[i-1]+k[i-1][j-wt[i-1]]),k[i-1][j]);
        }
    }
    return k[n][w];
}

int main()
{
    int n,w,i,j;
    scanf("%d %d",&w,&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&wt[i],&val[i]);
    }
    printf("%d\n",knapsack(w,n));
    return 0;
}
