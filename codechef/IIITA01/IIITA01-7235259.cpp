// User :: lovelotus ( Prem Kamal )

//#include<bits/stdc++.h>
//#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<climits>
#include<cassert>
#include<iostream>
#include<algorithm>
#include<string>
#include<utility>
#include<cctype>
#include<stack>
#include<queue>
#include<vector>
#include<map>
#include<set>
#include<deque>

#define lli long long int
#define ulli unsigned long long int
#define F first
#define S second
#define pii pair<int,int>
#define pip pair<int,pii>
#define pis pair<int,string>
#define pll pair<lli,lli>

using namespace std;

lli dp[10001][3];
int n;
lli mod=1e9+7;

void precompute()
{
    dp[1][0]=9;
    dp[1][1]=0;
    dp[1][2]=0;
    for(int i=2;i<10001;i++)
    {
        dp[i][0]=(dp[i-1][0]+dp[i-1][1]+dp[i-1][2])*9;
        if(dp[i][0]>=mod) dp[i][0]%=mod;
        dp[i][1]=dp[i-1][0];
        dp[i][2]=dp[i-1][1];
    }
}

int main()
{
    //freopen("C:\\Users\\lovelotus\\Desktop\\input.txt","r",stdin);
    //freopen("C:\\Users\\lovelotus\\Desktop\\output.txt","w",stdout);
    int t;
    precompute();
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("%lld\n",(dp[n][0]+dp[n][1]+dp[n][2])%mod);
    }
    return 0;
}