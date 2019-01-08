#include<stdio.h>

int main()
{
int a[300001];
long long int n,sum,min,k,mic,j,s,i,c=0,t;
scanf("%lld",&t);
while(t--)
{
scanf("%lld %lld",&n,&sum);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);}
s=0;
i=0;
min=100000000;
mic=0;
c=0;
j=0;k=0;
while(i<n)
{
while(j<n)
          { 
              s+=a[j];c++;
              if(s>sum) {s-=a[j];c--;break;}
            j++;   
          }
     if(c==mic) {if(s<min) min=s; }
     else if(c>mic) {mic=c; min=s;}
s-=a[i];i++; c--;       
}
printf("%lld %lld\n",min,mic);
} 
 
return 0;    
}
