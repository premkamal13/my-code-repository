#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<algorithm>

#define INF 1e9

using namespace std;

int a[101],dp[101][101],mix[101][101];

int main()
{
    int i,n,j,len,k;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=1;i<=n;i++) scanf("%d",&a[i]);
        for(i=1;i<=n;i++)
        {
            mix[i][i]=a[i];
            for(j=i+1;j<=n;j++)
            {
                mix[i][j]=(mix[i][j-1]+a[j])%100;
            }
        }
        for(i=1;i<=n;i++) dp[i][i]=0;
        for(len=2;len<=n;len++)
        {
            for(i=1;i<=n-len+1;i++)
            {
                j=i+len-1;
                dp[i][j]=INF;
                for(k=i;k<j;k++)
                {
                    dp[i][j]= min(dp[i][j],dp[i][k]+dp[k+1][j]+mix[i][k]*mix[k+1][j]);
                }
            }
        }
        printf("%d\n",dp[1][n]);
    }
    return 0;
}