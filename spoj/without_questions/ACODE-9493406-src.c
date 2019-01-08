#include<stdio.h>
#include<stdlib.h>

char a[10001];
int dp[10001];

int check(char c,char d)
{
    if(c=='1')  return 1;
    else if(c=='2')
    {
        if(d>='0'&& d<='6') return 1;
    }
    return 0;
}

int main()
{
    int i,n;
   while(scanf("%s",a),a[0]!='0')
   {
       n=strlen(a);
       dp[0]=1;
       dp[1]=1;
       for(i=2;i<=n;i++)
       {
           dp[i]=a[i-1]=='0'?0:dp[i-1];
           if(check(a[i-2],a[i-1]))
           dp[i]+=dp[i-2];
       }
       printf("%d\n",dp[n]);
   }
   return 0;
}
