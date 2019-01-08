#include<stdio.h>

int main()
{
  long long int t,a,b,c;
  long long int s;
  scanf("%lld",&t);
  while(t--)
  {
   scanf("%lld %lld %lld",&a,&b,&c);
   s=(a*a)-(2*b);
   printf("%lld\n",s);
  }    
  return 0;
}
