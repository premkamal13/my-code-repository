#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define lli long long int
lli mod=1000000007;
lli six=6,invsix;

lli pow1(lli x,lli n)
{
    if(n==0) return 1;
    lli temp=pow1(x,n/2)%mod;
    temp=((temp%mod)*(temp%mod))%mod;
    if(n&1) temp=((x%mod)*(temp%mod))%mod;
    return temp%mod;
}

void test()
{
    printf("%lld\n",pow1(5,4)%mod);
    printf("%lld\n",pow1(4,5)%mod);
    printf("%lld\n",pow1(5,10)%mod);
}

lli invmodulo()
{
    invsix=pow1(six,mod-2)%mod;
}

int main()
{
    int t;
    lli n,ans;
    invmodulo();
    //test();
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        ans=(((n+1)*(n+2)))%mod;
        ans=(ans*(n+3))%mod;
        ans=((ans%mod)*(invsix%mod))%mod;
        printf("%lld\n",ans);
    }
    return 0;
}
