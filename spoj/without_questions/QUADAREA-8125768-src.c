#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
int t;
double s,a,b,c,d,m,sq;
scanf("%d",&t);
while(t--)
{
  scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
  s=(a+b+c+d)/2;
  m=(s-a)*(s-b)*(s-c)*(s-d);
  sq=sqrt(m);
  printf("%.2lf\n",sq);
}
return 0;
}
