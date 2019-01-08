#include<cstdio>
#include<cstdlib>
#include<cmath>
#define lli long long int

lli mod=109546051211LL;

lli mulmod(lli x,lli y)
{
    if(!y) return 0;
    lli temp=mulmod(x,y>>1)%mod;
    temp=(temp+temp);//%mod;
    if(temp>=mod) temp-=mod;
    if(y&1) temp=(temp+x);//%mod;
    if(temp>=mod) temp-=mod;
    return temp%mod;
}

lli fact_pdt(lli n)
{
    lli i;
    lli val=1,fct=1;
    for(i=2;i<=n;i++)
    {
        fct=((fct%mod)*(i))%mod;
        val=mulmod(val,fct);
    }
    return val%mod;
}

int main()
{
    lli n;
    scanf("%lld",&n);
    printf("%lld\n",(fact_pdt(n))%mod);
    return 0;
}
