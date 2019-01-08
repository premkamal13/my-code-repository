#include<stdio.h>

int main()
{
float a=1.00,i,sum=0.0;
int c;
while(1)
{
scanf("%f",&a);
if(a-0.00==0) break;
c=0;
i=2.0;
sum=0.0;
while(1)
{
if(sum<=a)
{
sum = sum + (1/i++);
c++;
}
else break;
}
printf("%d card(s)\n",c);

}
return 0;
}
