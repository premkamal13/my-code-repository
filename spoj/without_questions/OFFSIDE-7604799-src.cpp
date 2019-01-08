#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;

int main()
{
    int a[12],b[12],i,m,n;
while(scanf("%d %d",&m,&n),(m!=0)&&(n!=0))
{
for(i=0;i<m;i++) scanf("%d",&a[i]);
sort(a,a+i);
for(i=0;i<n;i++) scanf("%d",&b[i]);               
sort(b,b+i);
if(a[0]<b[1]) printf("Y\n");
else printf("N\n");
}    
return 0;
}
