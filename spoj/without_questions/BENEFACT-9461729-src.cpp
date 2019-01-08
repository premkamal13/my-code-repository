#include<stdio.h>
#include<stdlib.h>
#include<cstring>
#include<vector>
#include<queue>
#define pii pair<int,int>
using namespace std;
vector<pii> v[50001];
int visited[50001];
queue<int> q;
int val;

void dfs(int i,int d)
{
    //printf("%d %lld\n",i,d);
    visited[i]=1;
    vector<pii>::iterator it;
    for(it=v[i].begin();it!=v[i].end();it++)
    {
        if(!visited[(*it).first]) dfs((*it).first,d+(*it).second);
    }
    visited[i]=0;
    if(d>val)
    {
        val=d;
        q.pop();
        q.push(i);
    }
}

void longpath()
{
    int x;
    val=0;
    memset(visited,0,sizeof(visited));
    q.push(1);
    dfs(1,0);
    x=q.front();
    val=0;
    dfs(x,0);
}

int main()
{
    int t,n,i,a,b,c;
    scanf("%d",&t);
    while(t--)
    {
        while(!q.empty()) q.pop();
        val=0;
        scanf("%d",&n);
        for(i=1;i<=n;i++) v[i].clear();
        for(i=0;i<n-1;i++)
        {
            scanf("%d%d%d",&a,&b,&c);
            v[a].push_back(pii(b,c));
            v[b].push_back(pii(a,c));
        }
        longpath(); printf("%d\n",val);
    }
    return 0;
}
