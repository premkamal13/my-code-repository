//lovelotus

#include<cstdio>
#include<cstdlib>
#include<cstring>
#define lli long long int
int tx[]={0,1,2,3,4,6,1,2,3,5,1,2,5,7};
int ty[]={1,1,1,1,1,1,0,0,0,0,0,0,0,0};
lli dp[10001][7];

lli mod=1e7+7;
lli calc(int n,int b)
{
    if(n<=0) return 1;
    if(!b) return 1;
    if(dp[n][b]) {return dp[n][b];}
    lli ans=0;
    for(int p=0;p<14;p++)
    {
        ans=(ans+calc(n-tx[p],b-ty[p]))%mod;
    }
    dp[n][b]=(ans+1+calc(n,b-1))%mod;// wicket loss: 1-all out, 2- game continue
    return dp[n][b];
}

int main()
{
    int t,n,tst=1;
    memset(dp,0,sizeof(dp));
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("Case %d: %lld\n",tst++,calc(n,6));
    }
    return 0;
}