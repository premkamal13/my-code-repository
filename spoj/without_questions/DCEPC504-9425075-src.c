#include<stdio.h>
#include<stdlib.h>
#define lli long long int
lli pow1[65];
void precompute()
{
    int i;
    pow1[0]=1;
    for(i=1;i<63;i++)
    {
        pow1[i]=pow1[i-1]<<1;
    }
}

int func(lli n)
{
    int i=0;
    if(n==1) return 1;
    while(pow1[i]<n) i++;
    return (1-func(n-pow1[i-1]));
}

int main()
{
    precompute();
    int t,cnt;
    lli r,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld %lld",&r,&n);
        if(func(n)) printf("Male\n");
        else printf("Female\n");
    }
    return 0;
}
