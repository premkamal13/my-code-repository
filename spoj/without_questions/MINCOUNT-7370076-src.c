#include<stdio.h>

int main()
{
int t;
long long int n,k;
scanf("%d",&t);
while(t--)
{
scanf("%lld",&n);
k=(n*(n+1)/2)/3;
printf("%lld\n",k);
}
return 0;
}


