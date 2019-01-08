#include<stdio.h>
int rev(int);
int t;

int main()
{
int a;
int b,c,sum,l,m, sum1;
scanf("%d",&a);
while(a--)
{
scanf("%d %d",&b,&c);
l= rev(b);
m= rev(c);
sum=l+m;
sum1=rev(sum);
printf("%d\n",sum1);
}
return 0;
}

int rev(int t)
{
int k,r=0;  
while(t!=0)
{
k=t%10;
t=t/10;
r=r*10+k;
}
return r;
}