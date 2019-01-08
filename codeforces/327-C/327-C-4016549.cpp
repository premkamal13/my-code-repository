#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#define lli long long int
lli mod=1000000007;
lli pow1(lli a,lli n)
{
    if(n==0) return 1;
    lli temp=pow1(a,n/2)%mod;
    temp=((temp%mod)*(temp%mod))%mod;
    if(n&1) temp=((temp%mod)*(a%mod))%mod;
    return temp%mod;
}

lli invmodulo(lli a)
{
    return pow1(a,mod-2)%mod;
}

char s[1000001];
int val[1000001];
int main()
{
    lli rep,v,r;
    int x,j,i,k;
    scanf("%s",s);
    scanf("%I64d",&rep);
    x=strlen(s);
    j=0;
    for(i=0;i<x;i++)
    {
        if(s[i]=='5' || s[i]=='0') val[j++]=i;
    }
    r=pow1(2,x)%mod;
    lli ans=0,v2,v3;
    for(k=0;k<j;k++)
    {
        v=pow1(2,val[k])%mod;
        v2=pow1(r,rep)%mod-1;
        v3=r-1;
        v=((v%mod)*(v2%mod))%mod;
        v=(v*(invmodulo(v3)))%mod;
        ans=(ans+v)%mod;
    }
    printf("%I64d\n",ans%mod);
    return 0;
}