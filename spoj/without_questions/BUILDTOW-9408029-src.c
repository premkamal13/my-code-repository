#include<stdio.h>
#include<stdlib.h>
#define lli long long int
lli mod=1000000007;
struct mat
{
    lli a,b,c,d;
};
struct base
{
    lli a,b;
};

struct mat multiply(struct mat x,struct mat y)
{
    struct mat temp;
    temp.a=(x.a*y.a+x.b*y.c)%mod;
    temp.b=(x.a*y.b+x.b*y.d)%mod;
    temp.c=(x.c*y.a+x.d*y.c)%mod;
    temp.d=(x.c*y.b+x.d*y.d)%mod;
    return temp;
}

struct mat pow1(struct mat p,lli n)
{
    struct mat temp;
    if(n==1) return p;
    temp=pow1(p,n>>1);
    temp=multiply(temp,temp);
    if(n&1) temp=multiply(temp,p);
    return temp;
}

lli ans(lli n)
{
  struct mat p={1,1,1,0};
  struct base bs={1,1};
  struct mat pw=pow1(p,n-1);
  return ((bs.a*pw.a+bs.b*pw.b)%mod *(bs.a*pw.c+bs.b*pw.d)%mod-1)%mod;
}

int main()
{
    int t;
    lli n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        printf("$%lld\n",ans(n+1));
    }
    return 0;
}
