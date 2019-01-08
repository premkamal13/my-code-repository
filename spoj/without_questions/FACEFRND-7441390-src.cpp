#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
int a[101],b[10001],i=0,j=0,t,m,n,d,c=0;
scanf("%d",&t);
while(t--)
{
scanf("%d %d",&a[i++],&n);
m=0;
while(m++<n) scanf("%d",&b[j++]);
}
sort(a,a+i);
sort(b,b+j);
for(m=0;m<j;m++) 
   {d=1;
      for(n=0;n<i;n++)
      {
      if((b[m]==a[n])||(b[m]==b[m-1])) {d=0;break;}
      }
   if(d!=0) {c++;}
   }
   printf("%d\n",c);
return 0;
}
