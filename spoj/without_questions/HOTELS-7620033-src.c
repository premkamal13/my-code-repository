#include<stdio.h>

int main()
{
int a[300001],n,sum,max,j,s,i;
scanf("%d %d",&n,&sum);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);}
s=0;
max=0;
j=0;
for(i=0;i<n;i++)
{
if(s<sum) {s+=a[i];}
if(s>sum){ while(s>sum)
      {s-=a[j++];} 
     }if(s>max) max=s;                
if(s==sum) {max=s; break;}
}
printf("%d\n",max);
return 0;    
}
