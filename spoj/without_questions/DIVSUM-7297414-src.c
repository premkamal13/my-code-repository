#include<stdio.h>

int main()
{
int t, s=0, a, i=0;
scanf("%d",&t);
while(t--)
{
s=1;
scanf("%d",&a);
for(i=2;i<sqrt(a);i++)
{
if(a%i==0) 
{
s=s+i+(a/i);
}
}
if(i==sqrt(a)) s+=sqrt(a);
if(a==1) s=0;
printf("%d\n",s);
}
return 0;
}


