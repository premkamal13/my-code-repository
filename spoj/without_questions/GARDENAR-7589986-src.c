#include<stdio.h>
int main()
{
double a,p,q,r,t,k;
double y,z,x;
scanf("%lf",&t);
while(t--)
{
 scanf("%lf %lf %lf",&p,&q,&r);
 x=(p*p+q*q+r*r)*(p*p+q*q+r*r)+4*(p*p*q*q+q*q*r*r+r*r*p*p-p*p*p*p-q*q*q*q-r*r*r*r);
 y=(p*p+q*q+r*r+sqrt(x))/2;
 k=sqrt(y);           
 z=k*k*0.43301270189;
 printf("%.2lf\n",z);
}
return 0;
}
