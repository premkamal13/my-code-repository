#include<cstdio>
#include<cstdlib>
#include<cmath>
#define lli long long int
lli mod=1000000007;
lli fact[2000002];
void precompute()
{
    fact[0]=1;
    int i;
    for(i=1;i<2000001;i++)
    {
        fact[i]=((fact[i-1])%mod*(lli)i+mod)%mod;
    }
}

lli pow1(lli a,lli n)
{
    if(n==0) return 1;
    lli temp=(pow1(a,n/2)%mod);
    temp=((temp%mod)*(temp%mod))%mod;
    if(n&1) temp=((temp)%mod*(a)%mod)%mod;
    return temp%mod;
}

lli invmodulo(lli x)
{
    return (pow1(x,mod-2)%mod);
}

int main()
{
    int n,t;
    lli val1,val2,ans;
    precompute();
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        val1=(fact[n]*fact[n])%mod;
        val1=(val1*2)%mod;
        val2=(n*fact[2*n])%mod;;
        ans=((val2%mod)*(invmodulo(val1))%mod)%mod;
        printf("%lld\n",ans);
    }
    return 0;
}
