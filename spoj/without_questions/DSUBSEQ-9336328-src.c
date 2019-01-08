#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define lli long long int
lli mod=1000000007;
lli dp[100001];
char s[100001];
int prev[200];
int main()
{
    int t,x,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",s);
        x=strlen(s);
        //memset(dp,0,sizeof(dp));
        //memset(prev,0,sizeof(prev));
        for(i=0;i<200;i++) prev[i]=0;
        dp[0]=1;
        //prev[s[0]]=0;
        for(i=1;i<=x;i++)
        {
            dp[i]=2*dp[i-1];
            if(prev[s[i-1]]) dp[i]-=dp[prev[s[i-1]]-1];
            if(dp[i]<0) dp[i]+=mod;
            else if(dp[i]>=mod) dp[i]-=mod;
            prev[s[i-1]]=i;
        }
        printf("%lld\n",dp[x]);
    }
    return 0;
}
