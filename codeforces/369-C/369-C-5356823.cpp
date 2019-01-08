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

int dp[100001],visited[100001];
vector<int>adj[100001];
stack<int>s;
void dfs(int x)
{
//    printf("%d\n",x);
    visited[x]=1;
    vector<int>::iterator it;
    for(it=adj[x].begin();it!=adj[x].end();it++)
    {
        int v=(*it);
        if(!visited[v])
        {
            dfs(v);
            dp[x]+=dp[v];
        }
    }
    visited[x]=0;
}

int main()
{
    int n,i,u,v,p;
    scanf("%d",&n);
    for(i=0;i<n-1;i++)
    {
        scanf("%d%d%d*9+",&u,&v,&p);
        adj[u].push_back(v);
        adj[v].push_back(u);
        if(p==2) dp[u]=dp[v]=1;
    }
    dfs(1);
//    for(i=1;i<=n;i++) printf("%d ",dp[i]); printf("\n");
    int f=0;
    for(i=1;i<=n;i++) if(dp[i]==1) {f=1;s.push(i);}
    printf("%d\n",s.size());
    if(f==1)
    {
        printf("%d",s.top());
        s.pop();
    }
    while(!s.empty())
    {
        printf(" %d",s.top());
        s.pop();
    }
    return 0;
}