#include<stdio.h>
#include<stdlib.h>
#define ull unsigned long long int
ull pow1(ull a,ull n)
{
    if(n==0) return 1;
    ull temp=pow1(a,n/2);
    temp=temp*temp;
    if(n&1) temp=temp*a;
    return temp;
}

int main()
{
    int t,p=1;
    ull n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%llu",&n);
        printf("Case %d: %llu\n",p++,pow1(2,(n+1))-1);
    }
    return 0;
}
