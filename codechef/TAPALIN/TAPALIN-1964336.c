#include<stdio.h>
#include<stdlib.h>

long long int mod=1000000007,k=25;

long long int pow1(long long int a,long long int b)
{
    long long int v,p;
    if(b==0) return 1;
    if(b==1) return a;
    else
    {
        p=pow1(a,b/2)%mod;
        v=(p*p)%mod;
        if(b%2!=0) v=(v*a)%mod;
        return v;
    }
}

long long int inv1(long long int n)
{
    return (pow1(n,mod-2))%mod;
}

long long int gp(long long int n1)
{
    long long int v;
    if(n1==1) return 26;
    v=(26 *(pow1(26,n1)%mod-1))%mod; v=(v%mod *(inv1(k)%mod))%mod;
    return v;
}

int main()
{
    long long int n;
    int t,i;
    scanf("%d",&t);
    //for(i=0;i<100;i++) printf("%lld\n",pow(26,i));
    while(t--)
    {
        scanf("%lld",&n);
        if(n==1) printf("26\n");
        else if(n%2==0) printf("%lld\n",(2 * gp(n/2) )%mod);
        else printf("%lld\n",((2*gp((n-1)/2))%mod + pow1(26,((n+1)/2))%mod)%mod);
    }
    return 0;
}