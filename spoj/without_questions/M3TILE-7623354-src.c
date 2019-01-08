#include<stdio.h>

long long int a(long long int);

int main()
{
long long int n,x;
while(scanf("%lld",&n),n!=-1)
{
    if(n==0) x=1;
    else if(n&1) x=0;
    else  {
            n=n/2; 
            x=a(n);                                
          }  
printf("%lld\n",x);
}    
return 0;
}

long long int a(long long int s)
{
if(s==0) return 1;
else if(s==1) return 3;
else return 4*a(s-1)-a(s-2);     
}
