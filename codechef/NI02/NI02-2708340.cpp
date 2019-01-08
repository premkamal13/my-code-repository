#include<cstdio>
#include<cstdlib>
#include<queue>
#include<algorithm>
#include<cmath>
#include<vector>
#define lli long long int
#define pid pair<int,lli>
#define F first
#define S second
using namespace std;

struct prioritize
{
    int operator()(pid a,pid b)
    {
        return (a.S>b.S);
    }
};

lli ax[2505],ay[2505],dist[2501];
int visited[2505];
vector<pid> v[2505];

lli distanc(int x,int y)
{
    return(((ax[x]-ax[y])*(ax[x]-ax[y]))+((ay[x]-ay[y])*(ay[x]-ay[y])));
}
int n;
lli inf=100000000;

lli dijkstra()
{
    int u,v1,i;

    lli dst;
    fill(dist,dist+n+3,inf);
    //printf("%lld %lld %lld\n",dist[0],dist[1],dist[2]);
    fill(visited,visited+n+3,0);
    priority_queue <pid,vector<pid>,prioritize>pq;
    pq.push(pid(n,0));
    dist[n]=0;
    while(!pq.empty())
    {
        pid x=pq.top();
        pq.pop();
        u=x.F;
        if(visited[u]) continue;
        vector<pid>::iterator it;
        for(it=v[u].begin();it!=v[u].end();it++)
        {
            pid y=(*it);
            v1=y.F;
            dst=y.S;
            if((!visited[v1]) && (dist[v1]>dist[u]+dst))
            {
                dist[v1]=dist[u]+dst;
                pq.push(pid(v1,dist[v1]));
            }
        }
        visited[u]=1;
    }
    //for(i=0;i<n+2;i++) printf("%lld ",dist[i]); printf("\n");
    return dist[n+1];
}

int main()
{
    int t,j,i;
    inf*=inf;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n+3;i++) v[i].clear();
        for(i=0;i<n+2;i++) scanf("%lld %lld",&ax[i],&ay[i]);
        for(i=0;i<n+2;i++)
        {
            for(j=0;j<n+2;j++)
            {
                lli x1=distanc(i,j);
                //printf("%lld\n",x1);
                if(i!=j) v[i].push_back(pid(j,x1));
            }
        }
        printf("%lld\n",dijkstra());
    }
    return 0;
}