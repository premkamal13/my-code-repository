#include<stdio.h>

int main()
{
long long int n,k;
scanf("%lld",&n);
if(n%10==0) printf("2\n");
else { k=n%10; printf("1\n%d\n",k);}
return 0;
}
