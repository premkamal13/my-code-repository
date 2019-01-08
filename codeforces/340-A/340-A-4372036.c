#include<stdio.h>
#include<stdlib.h>
#define lli long long int
lli gcd(lli a,lli b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}

int main()
{
    lli x,y,a,b;
    scanf("%I64d%I64d%I64d%I64d",&x,&y,&a,&b);
    lli k=gcd(x,y);
    k=(x*y)/k;
    printf("%I64d\n",b/k-(a-1)/k);
    return 0;
}