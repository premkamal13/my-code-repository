#include<stdio.h>
#include<stdlib.h>
#define lli long long int
lli mod=1000000007;

struct mat
{
    lli a,b;
    lli c,d;
};

struct mat multiply(struct mat x,struct mat y)
{
    struct mat temp;
    temp.a=((x.a*y.a)%mod + (x.b*y.c)%mod +mod)%mod;
    temp.b=((x.a*y.b)%mod + (x.b*y.d)%mod +mod )%mod;
    temp.c=((x.c*y.a)%mod + (x.d*y.c)%mod +mod )%mod;
    temp.d=((x.c*y.b)%mod + (x.d*y.d)%mod +mod)%mod;
    return temp;
}

struct mat pow1(struct mat p,lli n)
{
    struct mat temp;
    if(n==1) return p;
    temp=pow1(p,n/2);
    temp=multiply(temp,temp);
    if(n%2!=0) temp=multiply(temp,p);
    return temp;
}

lli funfib(lli x,lli y, lli n)
{
  struct mat p={1,1,1,0};
  struct mat pown= pow1(p,n-1);
  lli ans=(((pown.a%mod) * (y%mod))%mod + (((pown.b)%mod)*(x%mod)%mod) - (y%mod) + mod)%mod;
  return ans%mod;
}

int main()
{
    int t;
    lli n,x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld %lld %lld %lld",&x,&y,&n,&mod);
        if(n==0) printf("0\n");
        else if(n==1) printf("%lld\n",x%mod);
        else if(n==2) printf("%lld\n",(x+y)%mod);
        else printf("%lld\n",funfib(x,y,n+1)%mod);
    }
    return 0;
}
