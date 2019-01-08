// User: lovelotus(Prem Kamal)

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
#define pip pair<int,pii>
#define F first
#define S second
#define lli long long int
using namespace std;

lli dp[201],cnt[201],a[201];
//dp[p] tells the number of ways of forming a sequence with priority p
lli mod=1e9+7;

int main()
{
    int i,j,t,n,k;
    lli x;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&k);
        int j=0;
        memset(cnt,0,sizeof(cnt));
        for(i=0;i<n;i++)
        {
            scanf("%lld",&x);
            if(!cnt[x]) a[j++]=x;
            cnt[x]++;
        }
        n=j;
        sort(a,a+n);
        int m=0;
        memset(dp,0,sizeof(dp));
        dp[0]=1;
        for(i=n-1;i>=0;i--)
        {
            int cnt1=cnt[a[i]];
            lli pdt=1;
            for(int p=1;p<cnt1;p++) pdt=(pdt*(m+p))%mod;
            lli val1=(pdt*cnt1)%mod;
            lli val2=(pdt*m)%mod;
            for(int p=k;p>=0;p--)
            {
                dp[p+1]=(dp[p+1]+(dp[p]*val1)%mod)%mod;
                dp[p]=(dp[p]*val2)%mod;
            }
            m+=cnt1;
        }
        //for(i=0;i<=k;i++) printf("%d ",dp[i]); printf("\n");
        for(i=1;i<=k;i++)
        {
            dp[i]=(dp[i-1]+dp[i])%mod;
        }
        printf("%lld\n",dp[k]%mod);
    }
    return 0;
}