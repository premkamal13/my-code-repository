#include<cstdio>
#include<cstdlib>
#include<map>
#include<vector>
#include<string>
#include<cstring>
#include<queue>
#include<iostream>
#define pii pair<int,int>
#define piii pair<int,pii>
#define inf 200000001
using namespace std;

vector< pii > v[100005];
vector< pii >::iterator it;
int visited[100001],dist[100001];
int n;

class Prioritize
{
public:
    int operator() ( const pair<int, int>& p1, const pair<int, int>& p2 )
    {
        return p1.second > p2.second;
    }
};

int dijkstra(int src,int dst)
{
    priority_queue < pii, vector<pii>, Prioritize > pq;
    int i,node,distance,nbr;
    for(i=1;i<=n;i++){visited[i]=0;dist[i]=inf;}
    dist[src]=0;
    pq.push(pii(src,dist[src]));
    while(!pq.empty())
    {
        node=pq.top().first;
        pq.pop();
        if(node==dst) return dist[node];
        if(visited[node]) continue;
        for(it=v[node].begin();it!=v[node].end();it++)
        {
            nbr=(*it).first;
            distance=(*it).second;
            if(!visited[nbr] && dist[nbr]>dist[node]+distance)
            {
                dist[nbr]=dist[node]+distance;
                pq.push(pii(nbr,dist[nbr]));
            }
        }
        visited[node]=1;
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
            v[x].push_back(pii(y,z));
            v[y].push_back(pii(x,z));
        }
        p=dijkstra(src,dst);
        if(p==inf) printf("NONE\n");
        else printf("%d\n",p);
    }
    return 0;
}
