#include<stdio.h>
#include<stdlib.h>

long long int func(long long int n)
{
    if(n==1) return 3;
    if(n==2) return 9;
    return 2*func(n-1)+func(n-2);
}

int main()
{
    int t,i;
    long long int ans,ans1,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        printf("%lld\n",func(n));
    }
    return 0;
}
