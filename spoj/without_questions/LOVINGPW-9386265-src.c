#include<stdio.h>
#include<stdlib.h>
#define lli long long int

lli pw[65];
lli mod=1000000007;

void precompute()
{
    int i;
    pw[0]=1;
    for(i=1;i<63;i++) {pw[i]=pw[i-1]<<1;}
}
int main()
{
    lli a,b,n,sum;
    int i,t;
    precompute();
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        i=1;
        lli x=n;
        sum=0;
        while(x)
        {
            a=n/pw[i];
            b=n%pw[i];
            if(b>=pw[i-1])
            {
                b=(b%pw[i-1])+1;
            }
            else b=0;
            a=(a*pw[i-1]+b)%mod;
            sum=(sum+a)%mod;
            i++;
            x>>=1;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
