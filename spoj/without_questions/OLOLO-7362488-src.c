#include<stdio.h>

int main()
{
  int t;
  long long int a,x=0;
  scanf("%d",&t);
  while(t--)
  {
    scanf("%lld",&a);
    x=x^a;       
  }   
 printf("%lld\n",x);
 return 0;
}
