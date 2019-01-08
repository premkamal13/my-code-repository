#include<stdio.h>
#include<stdlib.h>
#define lli long long int
#define mod 1000000007

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
    temp.a=(x.a*y.a + x.b*y.c)%mod;
    temp.b=(x.a*y.b + x.b*y.d)%mod;
    temp.c=(x.c*y.a + x.d*y.c)%mod;
    temp.d=(x.c*y.b + x.d*y.d)%mod;
    return temp;
}

struct mat pow(struct mat p,lli n)
{
    struct mat temp;
    if(n==1) return p;
    temp=pow(p,n/2);
    temp=multiply(temp,temp);
    if(n&1) temp=multiply(temp,p);
    return temp;
}

lli flib(lli n)
{
  if(n<=0) return 0;
  if(n==1) return 1;
  struct base bas={1,0};
  struct mat p={1,1,1,0};
  struct mat pown= pow(p,n-1);
  lli ans=((pown.a*bas.a + pown.b*bas.b)%mod*(pown.c*bas.a + pown.d*bas.b)%mod)%mod;
  return ans%mod;
}

int main()
{
    int t;
    lli n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        if(n==0) printf("0\n");
        else printf("%lld\n",(flib(2*n+1))%mod);
    }
    return 0;
}
