#include<stdio.h>
#include<stdlib.h>

int val[301][301],dp[301][301];
char a[301];
int n;

int cnt()
{
    int i,j,k,v,l;
    for(i=0;i<n;i++) dp[i][i]=(a[i]=='1'?1:0);
    for(l=2;l<=n;l++)
    {
        for(i=0;i<n-l+1;i++)
        {
            j=i+l-1;
            if(val[i][j]) dp[i][j]=j-i+1;
            else
            {
                dp[i][j]=0;
                for(k=i;k<j;k++)
                {
                    v=dp[i][k]+dp[k+1][j];
                    if(v>dp[i][j]) dp[i][j]=v;
                }
            }
        }
    }
    return dp[0][n-1];
}

int main()
{
    int i,j,s,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        scanf("%s",a);
        memset(val,0,sizeof(val));
        for(i=0;i<n;i++)
        {
            s=0;
            for(j=i;j<n;j++)
            {
                if(a[j]=='1') s+=1;
                else s-=1;
                if(s>0) val[i][j]=1;
                else val[i][j]=0;
            }
        }
        printf("%d\n",cnt());
    }
    return 0;
}
