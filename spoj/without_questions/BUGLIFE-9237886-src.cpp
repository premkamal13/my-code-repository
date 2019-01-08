#include<cstdio>
#include<cstdlib>
#include<queue>
#include<vector>
using namespace std;

vector<int> g[2001];
vector<int>::iterator it;
int n,m,color[30001];

int isbipartite(int src)
{
    int i;
    for(i=1;i<=n;i++) color[i]=-1;
    color[src]=1;
    queue <int> q;
    q.push(src);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(it=g[u].begin();it!=g[u].end();it++)
        {
              if(color[*it]==-1)
              {
                  color[*it]=1-color[u];
                  q.push(*it);
              }
              else if(color[*it]==color[u])
              {
                  //printf("%d %d\n",*it,u);
                  return 0;
              }
        }
    }
    return 1;
}
int check()
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(!isbipartite(i)) return 1;
    }
    return 0;
}
int main()
{
    int p=1,t,x,y,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        for(i=0;i<=n;i++) g[i].clear();
        while(m--)
        {
            scanf("%d %d",&x,&y);
            g[x].push_back(y);
            g[y].push_back(x);
        }
        if(check()) printf("Scenario #%d:\nSuspicious bugs found!\n",p++);
        else printf("Scenario #%d:\nNo suspicious bugs found!\n",p++);
    }
    return 0;
}
