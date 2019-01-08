#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define lli long long int
lli dp[51][51];
int n,k;

lli calc(int a,int c,int b)
{
    if(c==k) return(a==b?1:0);
    if(dp[a][c]!=-1) return dp[a][c];
    int x=(a>1?a-1:a-1+n);
    int y=(a<n?a+1:a+1-n);
    return(dp[a][c]=calc(x,c+1,b)+calc(y,c+1,b));
}

lli func(int a,int b)
{
    memset(dp,-1,sizeof(dp));
    return calc(a,0,b);
}

int main()
{
    int a,b;
    while(scanf("%d%d",&n,&k),n!=-1)
    {
        scanf("%d%d",&a,&b);
        printf("%lld\n",func(a,b));
    }
    return 0;
}
