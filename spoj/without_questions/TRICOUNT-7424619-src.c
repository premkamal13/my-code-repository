#include<stdio.h>

int main()
{ int t;
  long long int s,n;
  scanf("%d",&t);
  while(t--)
  {
    scanf("%lld",&n);
    s=(n*(n+1)*(n+2))/6ULL;
    if(n%2==0) s+=n*((n+2)*(2*n-1))/24ULL;
    else s+=((n-1)*(n+1)*(2*n+3))/24ULL;
    printf("%lld\n",s);
  }
  return 0;
}
