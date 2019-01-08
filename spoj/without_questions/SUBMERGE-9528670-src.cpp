#include<cstdlib>
#include<cstdio>
#include<vector>
#define pb push_back
#define NIL -1
using namespace std;
int n,time;
vector<int> g[10001];
int visited[10001],ap[10001],disc[10001],low[10001],parent[10001];
void aputil(int u)
{
    //static int time=0;
    int children=0;
    visited[u]=1;
    disc[u]=low[u]=++time;
    vector<int>::iterator it;
    for(it=g[u].begin();it!=g[u].end();it++)
    {
        int v=(*it);
        if(!visited[v])
        {
            children++;
            parent[v]=u;
            aputil(v);
            low[u]=min(low[u],low[v]);
            if(parent[u]==NIL && children>1)
            {
                ap[u]=1;
            }
            if(parent[u]!=NIL && low[v]>=disc[u])
            {
                ap[u]=1;
            }
        }
        else if(v!=parent[u])
        {
            low[u]=min(low[u],disc[v]);
        }
    }
}

int articulation_points()
{
    int i,cnt;
    for(i=1;i<=n;i++)
    {
        parent[i]=NIL;
        visited[i]=0;
        ap[i]=0;
    }
    time=0;
    for(i=1;i<=n;i++)
    {
        if(!visited[i]) aputil(i);
    }
    cnt=0;
    for(i=1;i<=n;i++)
    {
        if(ap[i]) cnt++;
        //printf("(%d %d)\n",i,ap[i]);
    }
    return cnt;
}

int main()
{
    int m,i,u,v;
    while(scanf("%d %d",&n,&m),n!=0)
    {
        for(i=1;i<=n;i++) g[i].clear();
        while(m--)
        {
            scanf("%d%d",&u,&v);
            g[u].pb(v);
            g[v].pb(u);
        }
        printf("%d\n",articulation_points());
    }
    return 0;
}
