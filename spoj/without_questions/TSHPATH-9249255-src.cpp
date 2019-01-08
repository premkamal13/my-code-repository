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
#define inf 100000001
using namespace std;

map<string,int> m;
map<string,int>::iterator it1;
vector< pii > v[10005];
vector< pii >::iterator it;
int visited[10001],dist[10001];
int n;
char str[15];

class Prioritize
{
public:
    int operator() ( const pair<int, int>& p1, const pair<int, int>& p2 )
    {
        return p1.second > p2.second;
    }
};

int shortest_path(int src,int dst)
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
    //freopen("C:\\Users\\lovelotus\\Desktop\\input.txt","r",stdin);
    //freopen("C:\\Users\\lovelotus\\Desktop\\output.txt","w",stdout);
    int t,i,edge,x,y,q;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++) v[i].clear();
        m.clear();
        for(i=1;i<=n;i++)
        {
            scanf("%s",str);
            m[str]=i;
            scanf("%d",&edge);
            while(edge--)
            {
                scanf("%d %d",&x,&y);
                v[i].push_back(pii(x,y));
            }
        }
            scanf("%d",&q);
            while(q--)
            {
                scanf("%s",str);
                x=m[str];
                scanf("%s",str);
                y=m[str];
                printf("%d\n",shortest_path(x,y));
            }
    }
    return 0;
}
