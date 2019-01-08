#include<cstdlib>
#include<cstdio>
#define lli long long int
lli dp[11][11];

void precompute()
{
    int val=1;
    dp[0][1]=1;
    for(int j=2;j<=10;j++) dp[0][j]=dp[0][j-1]+j;
    for(int i=1;i<=10;i++)
    {
        val*=10;
        dp[i][1]=dp[i-1][10]-9;
        for(int j=2;j<=10;j++)
        {
            dp[i][j]=dp[i][j-1]+dp[i][1]+(j-1)*val;
        }
    }
    int i,j;
//    for(i=0;i<9;i++)
//    {
//        for(j=1;j<=10;j++)
//        {
//            printf("%d %d %lld\n",i,j,dp[i][j]);
//        }
//    }
}

lli func(int n)
{
    if(n<=0) return 0;
    int m=n,cnt=0,pten=1;
    while(m)
    {
        cnt++;
        m/=10;
        pten*=10;
    }
    //printf("%d %d\n",cnt,pten);
    pten/=10;
    lli sum=0;
    lli ans=0;
    while(cnt)
    {
        int x=n/pten;
        n=n%pten;
        lli val=dp[cnt-1][x];
        //printf("%lld\n",val);
        if(sum) ans+=sum*(x*pten)+val;
        else ans+=val;
        sum+=x;
        if(!n) break;
        cnt--;
        pten/=10;
    }
    //printf("ans= %lld\n",ans);
    return ans;
}

int main()
{
    precompute();
    int a,b;
    while(scanf("%d%d",&a,&b),a!=-1)
    {
        printf("%lld\n",func(b)-func(a-1));
    }
    return 0;
}
