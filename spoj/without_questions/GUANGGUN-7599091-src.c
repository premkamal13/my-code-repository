#include<stdio.h>
int main()
{
long long int n,s,x,y;
while(scanf("%lld",&n)!=EOF)
{
  x=n/9;
  y=n%9;
  s=x*81+y*y;
  printf("%lld\n",s);          
}    
return 0;
}
