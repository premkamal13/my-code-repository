#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define mod 100003
#define lli long long int
lli cmb[501][501],dp[501][501],ans[501];

void allcombinations()
{
    int i,j;
    for(i=0;i<501;i++) cmb[i][0]=1;
    for(i=1;i<501;i++)
    {
        for(j=1;j<501;j++)
        {
            cmb[i][j]=(cmb[i-1][j]+cmb[i-1][j-1])%mod;
        }
    }
    //printf("%d\n",cmb[401][251]);
}

//dp[n][k] deontes number of k sized subsets of with n in the end
void func()
{
    int n,k,r,sum,num=501;
    //printf("yahan\n");
    for(n=2;n<=num;n++)
    {
        dp[n][1]=1;
        for(k=2;k<n;k++)
        {
            dp[n][k]=0;
            for(r=1;r<k;r++)
            {
                dp[n][k]=(dp[n][k]+dp[k][r]*cmb[n-k-1][k-r-1])%mod;
            }
        }
    }
    for(num=2;num<501;num++)
    {
        sum=0;
        for(k=1;k<num;k++)sum=(sum+dp[num][k])%mod;
        ans[num]=sum%mod;
    }
}

int main()
{
    allcombinations();
    func();
    int t,n,p=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("Case #%d: %lld\n",p++,ans[n]);
    }
    return 0;
}
