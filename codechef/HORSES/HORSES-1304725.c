#include<stdio.h>
#include<math.h>

int main()
{
int a[5000],n,i,min,t,x,j;
scanf("%d",&t);
while(t--)
{ min=1000000002;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {scanf("%d",&a[i]);} 
for(i=0;i<n;i++)
   {
      for(j=i+1;j<n;j++)
      { x=abs(a[i]-a[j]); if(x<min) min=x;}
   }
printf("%d\n",min);      
}    
return 0;
}