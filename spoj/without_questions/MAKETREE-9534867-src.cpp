#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<vector>
#include<stack>
#include<queue>
using namespace std;
vector<int> g[100001];

int n,in[100001],ans[100001],p[100001],pos;
int toposort()
{
    int i,x,node;
    queue<int>q;
    for(i=1;i<=n;i++)
    {
        if(!in[i]) q.push(i);
    }
    ans[0]=0;
    while(!q.empty())
    {
        x=q.front();
        ans[pos]=x;
        p[x]=pos;
        ++pos;
        q.pop();
        vector<int>::iterator it;
        for(it=g[x].begin();it!=g[x].end();it++)
        {
            node=(*it);
            in[node]--;
            if(!in[node]) q.push(node);
        }
    }
}

void paint()
{
    for(int i=1;i<=n;i++)
    {
        printf("%d\n",ans[p[i]-1]);
    }
}

int main()
{
    int k,i,j,out,v;
    scanf("%d%d",&n,&k);
    memset(in,0,sizeof(in));
    for(i=1;i<=n;i++) g[i].clear();
    for(i=1;i<=k;i++)
    {
        scanf("%d",&out);
        for(j=0;j<out;j++)
        {
            scanf("%d",&v);
            g[i].push_back(v);
            in[v]++;
        }
    }
    //for(i=1;i<=n;i++) printf("(%d) ",in[i]);
    pos=1;
    toposort();
    //printf("done\n");
    paint();
    return 0;
}
