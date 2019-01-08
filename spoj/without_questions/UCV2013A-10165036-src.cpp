#include<cstdio>
#include<cstdlib>
#include<cstring>
#define lli long long int
using namespace std;
lli mod=1e9+7;
lli sum;
lli func(lli x,lli y)
{
    int i;
    lli ans=0,pw=x;
    for(i=1;i<=y;i++)
    {
        ans=(ans+pw);
        if(ans>mod) ans-=mod;
        pw=(pw*x)%mod;
    }
    return ans;
}

int main()
{
    lli x,y;
    while(scanf("%lld%lld",&x,&y),x||y)
    {
        printf("%lld\n",func(x,y));
    }
    return 0;
}
