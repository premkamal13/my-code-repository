#include<stdio.h>
#include<stdlib.h>

char s[5001],revs[5001];
int dp[5001][5001];

int max(int a,int b)
{
    return (a>b?a:b);
}

int lcs(int n)
{
    int i,j,f=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(s[i-1]==revs[j-1]) dp[f][j]=dp[1-f][j-1]+1;
            else dp[f][j]=max(dp[1-f][j],dp[f][j-1]);
        }
        f=1-f;
    }
    return dp[1-f][n];
}

int main()
{
    int n,i;
    scanf("%d",&n);
    scanf("%s",s);
    for(i=0;i<n;i++)
    {
        revs[i]=s[n-i-1];
    }
    printf("%d\n",n-lcs(n));
    return 0;
}
