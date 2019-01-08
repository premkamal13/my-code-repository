#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;

int main()
{
int n,i;
long long int a[100001],s,b[100001];
while(scanf("%d",&n),n!=0)
{
for(i=0;i<n;i++) scanf("%lld",&a[i]);
sort(a,a+i);
for(i=0;i<n;i++) scanf("%lld",&b[i]);                            
sort(b,b+i);
s=0;for(i=0;i<n;i++) s+=a[i]*b[n-i-1];
printf("%lld\n",s);
}
return 0;
}
