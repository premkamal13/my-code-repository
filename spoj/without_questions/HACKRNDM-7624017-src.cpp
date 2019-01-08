#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
int i,n,k,a[100000],j,c=0;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
sort(a,a+i);
for(i=0;i<n-1;i++)
{
for(j=i;j<n;j++)
{
if(a[j]-a[i]==k) {c++;break;}
else if(a[j]-a[i]>k) break;
}                
}
printf("%d\n",c);
return 0;
}
