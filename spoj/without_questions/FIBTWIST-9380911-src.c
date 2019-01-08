#include<stdio.h>
#include<stdlib.h>
#define lli long long int
lli mod=1000000007;

struct mat
{
    lli a,b;
    lli c,d;
};
struct base
{
    lli a,b;
};

struct mat multiply(struct mat x,struct mat y)
{
    struct mat temp;
    temp.a=((x.a*y.a)%mod + (x.b*y.c)%mod +mod)%mod;
    temp.b=((x.a*y.b)%mod + (x.b*y.d)%mod +mod)%mod;
    temp.c=((x.c*y.a)%mod + (x.d*y.c)%mod +mod)%mod;
    temp.d=((x.c*y.b)%mod + (x.d*y.d)%mod +mod)%mod;
    return temp;
}

struct mat pow(struct mat p,int n)
{
    struct mat temp;
    if(n==1) return p;
    temp=pow(p,n>>1);
    temp=multiply(temp,temp);
    if(n&1) temp=multiply(temp,p);
    return temp;
}

lli fib(int n)
{
  if(n==0) return 0;
  if(n==1) return 1;
  struct base bas={1,0};
  struct mat p={1,1,1,0};
  struct mat pown= pow(p,n-1);
  lli ans=((pown.a*bas.a)%mod + (pown.b*bas.a)%mod)%mod;
  return ans%mod;
}

int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %lld",&n,&mod);
        if(n==0) printf("0\n");
        else if(n==1) printf("1\n");
        //else printf("%lld\n",fib(n));
        else printf("%lld\n",((2*fib(n+1)-n-2)%mod+mod)%mod);
    }
    return 0;
}
