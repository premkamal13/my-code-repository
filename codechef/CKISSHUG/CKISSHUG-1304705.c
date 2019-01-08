#include<stdio.h>
#include<stdlib.h>

unsigned long long int pw(unsigned long long int);
unsigned long long int temp;
int main()
{
unsigned long long int n,t;
unsigned long long int y;
scanf("%llu",&t);
while(t--)
{
scanf("%llu",&n);
if(n&1) {n=(n+3)/2;y=pw(n)-2;}
else {n=n/2;y=3*pw(n)-2;}
printf("%llu\n",y%1000000007);
}
return 0;
}

unsigned long long int pw(unsigned long long int a)
{
if(a==1) return 2;
else if(a==2) return 4;
else if(a&1){temp=pw((a-1)>>1); return (2*temp*temp)%1000000007;}
else {temp=pw(a>>1); return (temp*temp)%1000000007;}   
}