#include<stdio.h>
#include<stdlib.h>

long long int a[10001];

int main()
{
   int i,t,n,k=1;
   a[0]=1;
   a[1]=1;
   a[2]=5;
   a[3]=11;
   a[4]=36;
   for(i=4;i<1005;i++)
   {
       a[i]=a[i-1]+5*a[i-2]+a[i-3]-a[i-4];
   }
   scanf("%d",&t);
   while(t--)
   {
       scanf("%d",&n);
       printf("%d %lld\n",k++, a[n]);
   }
   return 0;
}
