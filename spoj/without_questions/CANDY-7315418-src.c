#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,a[10001],i,j,s=0,k,t,m,l;
while(scanf("%d",&n),n!=-1)
{
i=0;
s=0;
while(i<n)
{
scanf("%d",&a[i]);
s+=a[i++];
}
k=s/n;
l=s%n;
if(l!=0) m=-1;
else
{
j=0;
m=0;
while(j<n)
{
t=a[j++]-k;
m+=abs(t);
}
m=m/2;
}
printf("%d\n",m);
}
return 0;
}
