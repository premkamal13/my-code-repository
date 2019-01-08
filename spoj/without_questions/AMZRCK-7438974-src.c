#include<stdio.h>
int amz(int);
int main()
{
int n,x,i=2,f;
int t,a[1000];
a[0]=2;a[1]=3;a[2]=5;
while(a[i]<1000000000)
    {
       a[i]=a[i-1]+a[i-2];i++;
    }                  
scanf("%d",&t);
while(t--)
{
scanf("%d",&n); 
printf("%d\n",a[n-1]);      
}    
return 0;
}