#include<stdio.h>
#include<stdlib.h>
#define lli long long int
#define mod 1000000007
int main()
{
    lli ans,n;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        lli x=n/3;
        lli y=n%3;
        if(!y) ans=2*(n/3);
        else if(y==1) ans=2*(n/3)+1;
        else ans=2*(n/3)+2;
        printf("%lld\n",ans%mod);
    }
    return 0;
}
