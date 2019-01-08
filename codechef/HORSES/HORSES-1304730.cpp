#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;

int main()
{
int a[5000],n,i,min,t;
scanf("%d",&t);
while(t--)
{
min=1000000002;
scanf("%d",&n);
for(i=0;i<n;i++) scanf("%d",&a[i]);
sort(a,a+i);
for(i=1;i<n;i++)
{
if((a[i]-a[i-1])<min) min=(a[i]-a[i-1]);
}
printf("%d\n",min);
}
return 0;
}