#include<stdio.h>

int main()
{
long long a[1000],b[1000],min,d;
int t,n,i,j,m;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
for(i=0;i<n;i++)scanf("%lld",&a[i]);
scanf("%d",&m);
for(i=0;i<m;i++) scanf("%lld",&b[i]);
min=1000000000;
for(i=0;i<n;i++)
{
                for(j=0;j<m;j++)
                    { d=a[i]-b[j]; if(d==0) {min=0;break;} if(d<0) d=-d; if(d<min) min=d;}          
if(min==0) break;         
}
printf("%lld\n",min);    
}
return 0;    
}
