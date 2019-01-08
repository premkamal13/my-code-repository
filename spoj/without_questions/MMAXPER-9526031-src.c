#include<stdio.h>
#include<stdlib.h>

int max(int a,int b)
{
    return (a>b?a:b);
}
int abs(int a)
{
    return(a>=0?a:-1*a);
}

int l[1001],h[1001],dp[1001][2];
int main()
{
   int n,i,j;
   scanf("%d",&n);
   for(i=1;i<=n;i++) scanf("%d %d",&l[i],&h[i]);
   dp[n][0]=h[n];
   dp[n][1]=l[n];
   for(i=n-1;i>0;i--)
   {
       dp[i][0]= max((abs(l[i]-l[i+1])+dp[i+1][0]),(abs(l[i]-h[i+1])+dp[i+1][1]))+h[i];
       dp[i][1]= max((abs(h[i]-l[i+1])+dp[i+1][0]),(abs(h[i]-h[i+1])+dp[i+1][1]))+l[i];
   }
   //for(i=1;i<=n;i++) printf("(%d %d) ",dp[i][0],dp[i][1]); printf("\n");
   printf("%d\n",max(dp[1][0],dp[1][1]));
   return 0;
}
