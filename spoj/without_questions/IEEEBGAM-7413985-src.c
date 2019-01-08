#include<stdio.h>

int main()
{
double s;
int n,t;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
s=((double)(n-1)/n)+((double)1/(n*(n+1)));
printf("%.8f\n",s);          
}
return 0;    
}
