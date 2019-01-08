
#include<stdio.h>
#include<stdlib.h>
#define lli long long int
lli max(lli a,lli b)
{
    return (a>b?a:b);
}

lli dp[100001],a[100001];
int n;
lli tabulatedp()
{
    int i;
    dp[n-1]=a[n-1];
    if(n>1) dp[n-2]=dp[n-1]+a[n-2];
    if(n>2) dp[n-3]=dp[n-2]+a[n-3];
    for(i=n-4;i>=0;i--)
    {
        dp[i]=max(max(a[i]+(i<n-2?dp[i+2]:0),a[i]+a[i+1]+(i<n-4?dp[i+4]:0)),a[i]+a[i+1]+a[i+2]+(i<n-6?dp[i+6]:0));
    }
    return dp[0];
}


int main()
{
    int t,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++) scanf("%d",&a[i]);
        printf("%lld\n",tabulatedp());
    }
    return 0;
}
