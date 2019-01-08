#include<stdio.h>
#include<math.h>
int main()
{
long long int y;
double s,i,a,t,m,n;
double pia=2.50662827463;
double e=2.718281828459045235360287471352;
scanf("%lf",&t);
while(t--)
{
s=0.0;
scanf("%lf",&n);
if(n==0) y=1;
else{
s=(n+0.5)*log(n)/log(10)-n*log(e)/log(10)+log(pia)/log(10);
y=(long long int)s+1;
}
printf("%lld\n",y);
}
return 0;   
}
