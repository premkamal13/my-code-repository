#include<stdio.h>

int main()
{ 
  int n;
  long long int d;
  while(scanf("%d",&n),n!=0)
  {
  d=n*(n+1)*(2*n+1)/6;
  printf("%lld\n",d);
  }
  return 0;
}
