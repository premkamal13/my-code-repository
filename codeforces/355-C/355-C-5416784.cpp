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
#define INF 1000000001
#define S second
#define lli long long int
using namespace std;

//int dp[101][101][2];
int n,l,r,ql,qr,a[100001],startsm[100001],endsm[100001];

/*int func(int lt,int rt, int flag)
{
    if(lt>rt) return 0;
    if(dp[lt][rt][flag]) return dp[lt][rt][flag];
    int res;
    if(flag)
    {
        res=min(func(l+1,r,0)+a[l]*l,func(l,r-1,1)+a[r]*r+qr);
    }
    else res= min(func(l+1,r,0)+a[l]*l+ql,func(l,r-1,1)+a[r]*r);
    return (dp[l][r][flag]=res);
}
*/
int main()
{
    int i,ans;
    scanf("%d%d%d%d%d",&n,&l,&r,&ql,&qr);
    int sm=0;
    //printf("startsm\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sm+=a[i];
        startsm[i]=sm;
        //printf("%d\n",startsm[i]);
    }
    sm=0;
    //printf("endsm\n");
    for(i=n-1;i>=0;i--)
    {
        sm+=a[i];
        endsm[i]=sm;
        //printf("%d\n",endsm[i]);
    }
    //printf("%d\n",min(func(1,n-1,0)+a[0]*l,func(0,n-2,1)+a[n-1]*r));
    ans = endsm[0]*r + (n-1)*qr;
    for(i=0;i<n-1;i++)
    {
        int val=startsm[i]*l+endsm[i+1]*r;
        if(2*(i+1)>n) val+=(2*i-n+1)*ql;
        if(2*(i+1)<n) val+=(n-2*i-3)*qr;
        //printf("%d %d\n",i,val);
        ans=min(ans,val);
    }
    ans=min(ans,startsm[n-1]*l+(n-1)*ql);
    printf("%d\n",ans);
    return 0;
}