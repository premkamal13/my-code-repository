#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<vector>
#include<utility>
#define int_max 20000001
using namespace std;

int visited[10001],cnt,dist[10001],v,e;

struct st1
{
    int u;
    int v;
};
vector< st1 > g[10001];
vector<st1>::iterator it;

int  mindist()
{
    int min=int_max,pos,i;
    for(i=1;i<=v;i++)
    {
        if(visited[i]==0 && dist[i]<=min)
        {
            min=dist[i];pos=i;
        }
    }
    return pos;
}

int func(int src,int dst)
{
    int i,val,p1,p2;
    for(i=1;i<=v;i++)
    {
        dist[i]=int_max;
        visited[i]=0;
    }
    dist[src]=0;
    for(cnt=0;cnt<v;cnt++)
    {
        int node=mindist();
        visited[node]=1;
        for(it=g[node].begin();it!=g[node].end();++it)
        {
            p1=(*it).u;
            p2=(*it).v;
            if(visited[p1]==0 && dist[p1]>(dist[node]+p2))
            {
                dist[p1]=dist[node]+p2;
            }
        }
    }
    //for(i=1;i<=v;i++) printf("%d ",dist[i]); printf("\n");
    return dist[dst];
}

int main()
{
    int t,i,j,x,y,z,src,dst;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&v,&e);
        for(i=0;i<v;i++)g[i].clear();
        for(i=0;i<e;i++)
        {
            scanf("%d %d %d",&x,&y,&z);
            g[x].push_back((st1){y,z});
        }
        //for(i=0;i<=;i++) printf("%d %d %d\n");
        scanf("%d %d",&src,&dst);
        x=func(src,dst);
        if(x==int_max) printf("NO\n");
        else printf("%d\n",x);
    }
    return 0;
}
