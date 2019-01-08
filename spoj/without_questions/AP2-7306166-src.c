#include<stdio.h>

int main()
{
int t;
long long int a,x,y,c,d,k,op,s,n;
scanf("%d",&t);
while(t--)
{
scanf("%lld %lld %lld",&x,&y,&s);
n=2*s/(x+y);
d= (y-x)/(n-5);
a=x-2*d;
k=n;
op=a;
printf("%lld\n",n);
printf("%lld ",a);
while(--k)
{
op+=d;
printf("%lld ",op);
}
printf("\n");
}
return 0;
}
