#include<cstdio>
#include<cstdlib>
using namespace std;
#define lli long long int
lli comb(lli n)
{
    return (n*(n-1)*(n-2))/6;
}

int main()
{
    int t;
    lli n,a,b,c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld%lld%lld%lld",&n,&a,&b,&c);
        lli x=comb(n+3)-((n-a+2>2)?comb(n-a+2):0)-(n-b+2>2?comb(n-b+2):0)-(n-c+2>2?comb(n-c+2):0);
        lli y=((n-a-b+1>2)?comb(n-a-b+1):0)+(n-a-c+1>2?comb(n-a-c+1):0)+(n-b-c+1>2?comb(n-b-c+1):0);
        lli z=comb(n-a-b-c>2?(n-a-b-c):0);
        printf("%lld\n",x+y-z);
    }
    return 0;
}