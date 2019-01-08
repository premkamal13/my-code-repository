#include<stdio.h>

int main()
{
 int n;
 long long int p;
 while(scanf("%d",&n),n!=0)
 {
   n++;
   p=(3*n*n-n)/2;
   printf("%lld\n",p);
 }
 return 0;
}
