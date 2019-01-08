
// User: lovelotus

//#include<bits/stdc++.h>
//#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<map>
#include<string>
#include<vector>
#include<queue>
#include<cstring>
#include<cstdlib>
#include<cassert>
#include<cmath>
#include<stack>
#include<set>
#include<utility>
#define pii pair<int,int>
#define pip pair<int,pair>
#define F first
#define S second
#define lli long long int

using namespace std;
int dp[1001];

void precompute()
{
    int i,j;
    for(i=1;i<1001;i++) dp[i]=1001;
    for(i=1;i<1001;i++)
    {
        int x=sqrt(i);
        if(x*x==i) dp[i]=1;
        else
        {
            for(j=1;j<=i;j++)
            {
                dp[i]=min(dp[i],dp[i-j]+dp[j]);
            }
        }
    }
}

int main()
{
    int t,n;
    precompute();
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("%d\n",dp[n]);
    }
    return 0;
}
