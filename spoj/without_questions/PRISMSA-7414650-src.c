#include<stdio.h>
#include<math.h>

int main()
{
int a,v,n;
scanf("%d",&n);
while(n--)
{
double s,k=0.8660254038,a;
scanf("%d",&v);
a=pow((double)3*v/(k*k),1/3.0);
s=18*(double)v/(2*a*k);   
printf("%.10f\n",s); 
}
return 0;
}
