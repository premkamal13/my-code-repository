#include<math.h>
int main()
{
long long int a,x,y;
scanf("%lld",&a);
x=fact(a);
y=pow(2,a);
printf("%lld",x+y-a);
return 0;
}
int fact(int z)
{
if(z==1) return 1;
else return z*fact(z-1);
}

