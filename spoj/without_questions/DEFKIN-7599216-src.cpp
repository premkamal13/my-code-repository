#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
long long n,t,a[40002],b[40002],max1,max2,c,d,j,i,x,y;
scanf("%lld",&t);
while(t--)
{
          max1=0;max2=0;
scanf("%lld %lld %lld",&x,&y,&n);
for(i=1;i<=n;i++){scanf("%lld %lld",&a[i],&b[i]);}
a[i]=x+1;b[i]=y+1;
a[0]=0;b[0]=0;
i++;
sort(a,a+i);
sort(b,b+i);
for(j=1;j<i;j++){d=a[j]-a[j-1];if(d>max1) max1=d;c=b[j]-b[j-1];if(c>max2) max2=c;}
printf("%lld\n",(max1-1)*(max2-1));
}
return 0;
}
