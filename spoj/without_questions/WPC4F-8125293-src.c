#include<stdio.h>
#include<stdlib.h>
int a[21],b[21],d[21];
int min(int a,int b)
{
if(a>b) return b;
else return a;
}

int main()
{
    int t,i,n,x,y;
   scanf("%d",&t);
   while(t--)
   {
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
          scanf("%d %d %d",&a[i],&d[i],&b[i]);
      }
      for(i=2;i<=n;i++)
      {
          a[i]+=min(b[i-1],d[i-1]);
          b[i]+=min(a[i-1],d[i-1]);
          d[i]+=min(a[i-1],b[i-1]);
      }
      x=min(a[n],b[n]);
      y=min(d[n],x);
      printf("%d\n",y);
   }
return 0;
}
