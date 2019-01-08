#include<stdio.h>
#include<math.h>

int main()
{
int a,b,c,i,j,k;
scanf("%d",&a);
while(a--)
{
scanf("%d %d",&b,&c);
for(i=b;i<=c;i++)
{
k=0;
if(i==1)
{
k=1;
}
for(j=2;j<=(int)sqrt(i);j++)
{
if(i%j==0)
{
k=1;
break;
}
}
if(k==0)
printf("%d\n",i);       
}
printf("\n");
}
return 0;
}