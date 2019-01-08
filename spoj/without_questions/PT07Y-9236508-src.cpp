#include<cstdio>
#include<cstdlib>
#include<queue>
#include<vector>
#include<cstring>

using namespace std;

vector<int> v[100001];
vector<int>::iterator it;
queue<int> q;
int bfs(int node,int n)
{
    int visited[n+1],i;
    memset(visited,0,sizeof(visited));
    q.push(node);
    visited[node]=1;
    while(!q.empty())
    {
        node=q.front();
        q.pop();
        for(it=v[node].begin();it!=v[node].end();it++)
        {
            if(!visited[*(it)])q.push(*(it));
            visited[*(it)]=1;
        }
    }
    for(i=1;i<=n;i++) if(!visited[i]) return 0;
    return 1;
}


int main()
{
    int i,e,n,x,y;
    scanf("%d %d",&n,&e);
    for(i=0;i<e;i++)
    {
        scanf("%d %d",&x,&y);
        v[x].push_back(y);
        v[y].push_back(x);
    }
    if(e!=n-1) printf("NO\n");
    else
    {
        if(bfs(1,n)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
