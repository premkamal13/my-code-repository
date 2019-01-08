//lovelotus
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<cstring>
#include<queue>
#include<algorithm>

#define pid pair<int,double>
#define F first
#define S second
using namespace std;

vector<pid> v[1001];
int n,visited[1005],len=1000;
double inf,val,dist[1005];

double minim(double a,double b)
{
    return (a<b?a:b);
}

class prioritize
{
    public:
    bool operator()(pid p1,pid p2)
    {
        return p1.S<p2.S;
    }
};

double dijkstra(int i)
{
    if(n==1) return 0.00000000;
    int v1;
    double d;
    fill(visited,visited+len,0);
    fill(dist,dist+len,-1.00000000);
    priority_queue<pid,vector<pid>, prioritize> pq;
    pq.push(pid(i,inf));
    dist[i]=inf;
    while(!pq.empty())
    {
        pid x=pq.top();
        pq.pop();
        i=x.F;
        if(visited[i]) continue;
        vector<pid>::iterator it;
        for(it=v[i].begin();it!=v[i].end();it++)
        {
            v1=(*it).F;
            d=(*it).S;
            double mdist=minim(dist[i],d);
            if(dist[v1]<mdist)
            {
                dist[v1]=mdist;
                pq.push(pid(v1,dist[v1]));
            }
        }
        visited[i]=1;
    }
    return dist[n];
}

int main()
{
    int t,i,j;
    inf=100000001.000000;
    double d;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)v[i].clear();
        while(scanf("%d%d %lf",&i,&j,&d),i!=-1)
        {
            v[i].push_back(pid(j,d));
            v[j].push_back(pid(i,d));
        }
        printf("%lf\n",dijkstra(1));
    }
    return 0;
}