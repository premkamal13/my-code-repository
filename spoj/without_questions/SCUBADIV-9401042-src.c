#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define inf 100000001;
int dp[22][80][1001];
int oxygen[1001],nitrogen[1001],wt[1001];
int min(int x,int y)
{
    return (x<y?x:y);
}

int func(int ox,int nit,int n)
{
    //printf("%d %d %d\n",ox,nit,n);
    if(ox<=0 && nit<=0) return 0;
    if(ox<0) ox=0;
    if(nit<0) nit=0;
    if(n<0) return inf;
    if(dp[ox][nit][n]!=0) {return dp[ox][nit][n];}
    dp[ox][nit][n]=min(func(ox,nit,n-1),wt[n]+func(ox-oxygen[n],nit-nitrogen[n],n-1));
    return dp[ox][nit][n];
}

int main()
{
    int t,ox,nit,n,j,k,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&ox,&nit);
        //printf("%d %d\n",ox,nit);
        scanf("%d",&n);
        for(i=0;i<n;i++) scanf("%d%d%d",&oxygen[i],&nitrogen[i],&wt[i]);
        memset(dp,0,sizeof(dp));
        //for(i=0;i<=ox;i++)for(j=0;j<=nit;j++)for(k=0;k<=n-1;k++)dp[i][j][k]=100000001;
        //for(i=0;i<=ox;i++)for(j=0;j<=nit;j++)for(k=0;k<=n-1;k++)printf("%d ",dp[i][j][k]);
        printf("%d\n",func(ox,nit,n-1));
    }
    return 0;
}
