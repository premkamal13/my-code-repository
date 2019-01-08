#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int a[1001],dp[1001];

int main()
{
    int t,tst=1,ans,n,i,k,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&k);
        for(i=0;i<n;i++) scanf("%d",&a[i]);
        memset(dp,0,sizeof(dp));
        for(i=0;i<n;i++)
        {
            for(j=0;j<=k;j++)
            {
                if(dp[j]>1) dp[j]--;
            }
            if(a[i]<=k && !dp[a[i]]) dp[a[i]]=3;
            for(j=0;j<=k-a[i];j++)
            {
                if(dp[j]==1 && !(dp[j+a[i]]))
                {
                    dp[j+a[i]]=3;
                }
            }
            if(dp[k]) break;
        }
        //for(i=0;i<=k;i++) if(dp[i]) printf("%d ",i); printf("\n");
        ans=0;
        for(i=k;i>0;i--)
        {
            if(dp[i]) {ans=i; break;}
        }
        printf("Scenario #%d: %d\n",tst++,ans);
    }
    return 0;
}
