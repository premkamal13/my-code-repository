#include<stdio.h>
#include<stdlib.h>
#define lli long long int
lli max(lli a,lli b)
{
    return (a>b?a:b);
}

lli dp[100001],a[100001];
int n;
lli func(int i)
{
    if(i>=n) return 0;
    if(i==n-1) return dp[i]=a[i];
    if(i==n-2) return dp[i]=a[i]+a[i+1];
    if(i==n-3) return dp[i]=a[i]+a[i+1]+a[i+2];
    if(dp[i]) return dp[i];
    return dp[i]=(max(max(a[i]+func(i+2),(i<n-2?a[i]+a[i+1]+func(i+4):0)),(i<n-3?a[i]+a[i+1]+a[i+2]+func(i+6):0)));
}


int main()
{
    int t,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++) scanf("%d",&a[i]);
        memset(dp,0,sizeof(dp));
        printf("%lld\n",func(0));
    }
    return 0;
}
