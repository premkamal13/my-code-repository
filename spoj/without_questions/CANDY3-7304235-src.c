#include<stdio.h>

int main()
{
long long int a,s,t,n;
int i;
scanf("%lld",&t);
while(t--)
{
scanf("%lld",&n);
s=0;
for(i=0;i<n;i++)
{
scanf("%lld",&a);
s= (s+a)%n;
}
if(s==0) printf("YES\n");
else printf("NO\n");
}
return 0;
}
