#include<math.h>
#include<stdio.h>
#include<stdlib.h>
long long int a(long long int n);
int main()
{
long long int n,x;
while(scanf("%lld",&n)!=EOF)
{ if(n==0) x=0;
else x=a(n);                      
  printf("%lld\n",x);                        
}
return 0;
}

long long int a(long long int n)
{
if(n==1) return 3;
else if(n==2) return 7;
else return 2*a(n-1)+a(n-2);
}
