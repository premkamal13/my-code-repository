#include<stdio.h>
#include<math.h>
long long int mod=1000000007;

long long int pow1(long long int a,long long int b)
{
    long long int x;
    if(b==1) return a;
    x=pow1(a,b/2)%mod;
    x=((x%mod) * (x%mod))%mod;
    if(b&1) x=((x%mod) * (a%mod))%mod;
    return x;
}


long long int inv(long long int x)
{
    return (pow1(x,mod-2)%mod);
}

int main()
{
long long int t,n,d,nd;
scanf("%lld",&t);
while(t--)
{
scanf("%lld",&n);
if((n==1)||(n==2)||(n==3)) nd=0;
else
{
    n-=3;
    nd=(n%mod * (n+1)%mod)%mod;
    nd=(nd%mod * (n+2)%mod)%mod;
    nd=(nd%mod * (n+3)%mod)%mod;
    nd=(nd%mod * inv(24)%mod)%mod;
}
printf("%lld\n",nd);
}
return 0;
}
