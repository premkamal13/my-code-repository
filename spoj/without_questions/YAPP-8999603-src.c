#include<stdio.h>
#include<stdlib.h>

long long int mod=1000000007;

long long int pow1(long long int x)
{
    long long int v;
    if(x==0) return 1;
    if(x==1) return 2;
    v=pow1(x/2)%mod;
    v=(v%mod * v%mod)%mod;
    if(x&1) v=(v*2)%mod;
    return v;
}

int main()
{
    int t;
    long long int n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        printf("%lld\n",pow1(n-1)%mod);
    }
    return 0;
}
