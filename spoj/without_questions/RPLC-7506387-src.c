#include<stdio.h>
int main()
{
long long int t,n,s,i=1,x,val,min;
scanf("%lld",&t);
while(t--)
{
scanf("%lld",&n);
s=0; min=0;
while(n--) {scanf("%lld",&x); s+=x; if(s<min) min=s;}
if(min<=0) val=-min;
else val=min;
printf("Scenario #%lld: %lld\n",i,val+1);
i++;
}
return 0;
}
