#include<cstdlib>
#include<cstdio>
#include<utility>
#include<algorithm>
#include<iostream>
#include<cstring>


using namespace std;

pair<int,int>arr[101];
int s,n,sum,spend;
int dp[101][501];

int max1(int a,int b)
{
    return(a>b?a:b);
}

void fun()
{
    int i,j;
    memset(dp,0,sizeof(dp));
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=s;j++)
        {
            if(arr[i-1].first>j) dp[i][j]=dp[i-1][j];
            else dp[i][j]=max1(dp[i-1][j],arr[i-1].second+ dp[i-1][j-arr[i-1].first]);
        }
    }
    spend=dp[n][s];
    i=s;
    while(dp[n][i]==spend)
    {
        i--;
    }
    sum=i+1;
}

int main()
{
    int i,j;
    while(scanf("%d %d",&s,&n), s!=0 && n!=0)
    {
        for(i=0;i<n;i++) scanf("%d %d",&arr[i].first,&arr[i].second);
        fun();
        printf("%d %d\n",sum,spend);
        //for(i=0;i<=n;i++) {for(j=0;j<=s;j++) printf("%d ",dp[i][j]); printf("\n");}
    }
    return 0;
}
