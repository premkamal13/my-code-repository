#include<stdio.h>
#include<stdlib.h>

int a[51][51],dp[51][51];
int max(int x,int y)
{
    return (x>y?x:y);
}
int main()
{
    int n,i,j,m,sti,stj;
    while(scanf("%d",&n)!=EOF)
    {
        scanf("%d",&m);
        scanf("%d %d",&sti,&stj);
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        dp[sti][stj]=a[sti][stj];
        for(i=sti+1;i<=n;i++) dp[i][stj]=dp[i-1][stj]-a[i][stj];
        for(j=stj+1;j<=m;j++) dp[sti][j]=dp[sti][j-1]-a[sti][j];
        for(i=sti+1;i<=n;i++)
        {
            for(j=stj+1;j<=m;j++)
            {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1])-a[i][j];
            }
        }
        if(dp[m][n]>=0)printf("Y %d\n",dp[m][n]);
        else printf("N\n");
    }
    return 0;
}
