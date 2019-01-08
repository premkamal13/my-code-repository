#include<stdio.h>

int main()
{
int a[200][2],t,n,i,j,temp,max,s;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
for(i=0;i<2*n;i++)          
{
scanf("%d",&a[i][0]);
if(i&1) a[i][1]=-1;
else a[i][1]=1;
}
for(i=0;i<2*n;i++)
{for(j=i+1;j<2*n;j++)
{ if(a[i][0]>a[j][0]) {
                        temp=a[i][0];a[i][0]=a[j][0];a[j][0]=temp;
                        temp=a[i][1];a[i][1]=a[j][1];a[j][1]=temp;
                      }
}
}
s=0; max=0;
for(i=0;i<2*n;i++){s+=a[i][1]; if(s>max) max=s;}
printf("%d\n",max);
}
return 0;
}
