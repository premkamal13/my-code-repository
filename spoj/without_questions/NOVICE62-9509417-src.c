//Algorithm-DERANGEMENT
//lovelotus
#include<stdio.h>
#include<stdlib.h>
#define lli long long int
#define len 1000001
lli d[len];
lli mod=1000000007;
void precompute()
{
    int i;
    d[1]=0;
    d[2]=1;
    for(i=3;i<len;i++)
    {
        d[i]=(d[i-1]+d[i-2])%mod;
        d[i]=(d[i]*(lli)(i-1))%mod;
    }
}


int main()
{
    int t,n;
    precompute();
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("%lld\n",d[n]);
    }
    return 0;
}
