#include<stdio.h>
#include<stdlib.h>

long long int mod=1000000007,x,a,p=3,q=2,ans;

long long int pow1(long long int p1,long long int n)
{
    long long int y,val;
    if(n==0) return 1;
    y=pow1(p1,n/2)%mod;
    val=((y%mod) *(y%mod))%mod;
    if(n%q!=0) val=((val)%mod * (p1)%mod)%mod;
    return val%mod;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&x);
        a=x/p;
        if(x==0) printf("1\n");
        else if(x==1) printf("1\n");
        else if(x==2) printf("2\n");
        else if(x==3) printf("3\n");
        else
        {if(x%p==0)
        {
            ans=pow1(p,a)%mod;
        }
        else if(x%p==1)
        {
            ans=4*pow1(p,a-1)%mod;
        }
        else ans=2*pow1(p,a)%mod;
        printf("%lld\n",ans%mod);
        }
    }
    return 0;
}
