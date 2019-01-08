
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
#define pip pair<pii,int>
#define F first
#define S second
#define lli long long int
using namespace std;

pip a[10001];
int dp[10001];

int search_prev(int stval,int lt,int rt)
{
    if(rt-lt<=1) return lt;
    int mid=(lt+rt)>>1;
    if(a[mid].F.F<=stval) lt=mid;
    else rt=mid;
    search_prev(stval,lt,rt);
}

int main()
{
    int t,i,j,n,x,y,p;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d%d%d",&x,&y,&p);
            a[i]=pip(pii(x+y,x),p);//(end time, start time, price)
        }
        sort(a,a+n);
        dp[0]=0;
        for(i=0;i<n;i++)
        {
            int val=search_prev(a[i].F.S,-1,i);
            dp[i+1]= max(dp[i],dp[val+1]+a[i].S);
            //printf("%d %d\n",i,dp[i]);
        }
        //printf("%d %d\n",i,dp[i]);
        printf("%d\n",dp[n]);
    }
    return 0;
}
