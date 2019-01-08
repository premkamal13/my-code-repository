#include<stdio.h>

int main()
{
  unsigned long long int n;
  int k;
  scanf("%lld",&n); 
  k=0;
  while(n>1)
  { 
  if(n%3==0) {k=1;break;}
  else if(n%2==0) n=n/2;
  else n=3*n+3;
  }
  if(k==1) printf("NIE");
  else printf("TAK");
return 0;
}
