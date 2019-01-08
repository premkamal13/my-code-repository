#include<stdio.h>

long long int pw(long long int,int);
int main()
{
long long int a,n,t,s,i;int k;
while(scanf("%lld %d",&n,&k),((n!=0)||(k!=0)))
{
s=(pw(n,n))%10000007+(2*pw(n-1,n-1))%10000007+(pw(n,k))%10000007+(2*pw(n-1,k))%10000007;
printf("%lld\n",s%10000007);        
}    
return 0;
}

long long int pw(long long int x,int y)
{
int i=1;
while(y)
{
  if(y&1)
  i=(i*x)%10000007;
  y=y>>1;
  x=(x*x)%10000007;      
        }
return i;
}
