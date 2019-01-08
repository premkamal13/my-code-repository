#include<cstdio>
#include<cstdlib>
#include<vector>
#include<queue>

using namespace std;
//#define lli long long int
#define pii pair<int,int>
vector< pii> v[100001];
vector< pii >::iterator it;
int dist[100001],visited[100001],inf=2147483647;
/*class Prioritize
{
    public:
    int operator()(const pii &p1,const pii &p2)
    {
        return p1.second > p2.second;
    }
};*/

int n;
int dijkstra(int src,int dst)
{
    int i,u,u_node;
    priority_queue <pii, vector<pii>, greater<pii> > pq;
    for(i=1;i<=n;i++)
    {
        dist[i]=inf;
        visited[i]=0;
    }
    dist[src]=0;
    pq.push(pii(dist[src],src));
    while(!pq.empty())
    {
        int node=pq.top().second;
        pq.pop();
        if(visited[node]) continue;
        for(it=v[node].begin();it!=v[node].end();it++)
        {
            u=(*it).second;
            u_node=(*it).first;
            if(!visited[i] && dist[u]>dist[node]+u_node)
            {
                dist[u]=dist[node]+u_node;
                pq.push(pii(dist[node],u));
            }
        }
        visited[node]=1;
        if(node==dst) return dist[node];
    }
    return dist[dst];
}

int main()
{
    int m,src,dst,t,i;
    int x,y,z,p;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d %d",&n,&m,&src,&dst);
        for(i=0;i<=n;i++) v[i].clear();
        while(m--)
        {
            scanf("%d %d %d",&x,&y,&z);
            v[x].push_back(pii(z,y));
            v[y].push_back(pii(z,x));
        }
        p=dijkstra(src,dst);
        if(p==inf) printf("NONE\n");
        else printf("%d\n",p);
    }
    return 0;
}
