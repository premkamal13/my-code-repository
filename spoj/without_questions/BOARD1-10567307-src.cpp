
// User: lovelotus

#include<bits/stdc++.h>
#define lli long long int
using namespace std;

lli a[1001],dp[1001];

int main()
{
    int n,k,i,j;
    lli val,inf=1000000001,sm=0;
    inf*=inf;
    scanf("%d%d",&n,&k);
    a[0]=a[n]=0;
    for(i=1;i<n;i++)
    {
        scanf("%lld",&a[i]);
        sm+=a[i];
    }
    dp[0]=0;
    for(i=1;i<=n;i++)
    {
        val=inf;
        for(j=1;j<=k;j++)
        {
            if(i<j) break;
            val=min(val,dp[i-j]);
        }
        dp[i]=val+a[i];
    }
    printf("%lld\n",sm-dp[n]);
    return 0;
}
