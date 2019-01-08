#include<cstdio>
#include<cstdlib>
#include<map>
#include<vector>
#include<string>
#include<cstring>
#include<iostream>
#define pii pair<int,int>
#define piii pair<int,pii>
#define inf 100000001
using namespace std;

map<string,int> m;
vector< pii > v[10005];
vector< pii >::iterator it;
int visited[10001],dist[10001];
int n;
char str[15];
int min_dist()
{
    int i,pos,minm=inf;
    for(i=1;i<=n;i++)
    {
        if(!visited[i] && dist[i]<minm)
        {
            minm=dist[i];
            pos=i;
        }
    }
    return pos;
}

int shortest_path(int src,int dst)
{
    int i,node,distance,x;
    //memset(visited,0,sizeof(visited));
    //memset(dist,inf,sizeof(dist));
    for(i=1;i<=n;i++){visited[i]=0;dist[i]=inf;}

    dist[src]=0;
    for(i=0;i<n;i++)
    {
        node=min_dist();
        //if(node==dst) return dist[node];
        visited[node]=1;
        for(it=v[node].begin();it!=v[node].end();it++)
        {
            x=(*it).first;
            distance=(*it).second;
            if(dist[x]>dist[node]+distance)
            {
                dist[x]=dist[node]+distance;
            }
        }
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
