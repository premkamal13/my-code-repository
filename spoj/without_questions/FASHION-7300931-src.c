#include<stdio.h>
int main()
{
int a, b,t,i,j,sum,temp;
int m[1000],f[1000];
scanf("%d",&t);
while(t--)
{
scanf("%d",&a);
for(i=0;i<a;i++)
{
scanf("%d",&m[i]);
}
for(i=0;i<a;i++)
{
scanf("%d",&f[i]);
}
for(i=0;i<a;i++)
{
for(j=0;j<a;j++)
{
 if(m[i]<m[j]) { temp=m[i];
                m[i]=m[j];
                m[j]=temp; 
               }
 if(f[i]<f[j]) { temp=f[i];
                f[i]=f[j];
                f[j]=temp; 
               }
}
}
sum=0;
for(i=0;i<a;i++)
{
sum+=m[i]*f[i];
}
printf("%d\n",sum);
}
return 0;
}
