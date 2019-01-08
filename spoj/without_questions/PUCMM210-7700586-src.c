#include<stdio.h>
long long a[1000009];
long long int n,m,t,x;
int i;  

int main()
{ a[1]=1;
  for(x=1;x<1000001;x++)
{
t=((x*(x+1))/2)%1000000003;
a[x]=((t*t)%1000000003+a[x-1])%1000000003;         
} 
  scanf("%lld",&t);
  while(t--)
  {
            scanf("%lld",&n);
            m=a[n];
            printf("%lld\n",m%1000000003);
            }  
return 0;
}
