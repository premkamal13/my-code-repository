#include<cstdio>
#include<cstdlib>
#include<vector>
#include<queue>

using namespace std;

int visited[100001];
vector<int> v[100001];
vector<int>::iterator it;

void bfs(int i)
{
    queue<int> q;
    q.push(i);
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        visited[x]=1;
        for(it=v[x].begin();it!=v[x].end();it++)
        {
            if(!visited[*it]) q.push(*it);
        }
    }
}

int main()
{
    int i,t,n,r,x,y,cnt;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++) {visited[i]=0; v[i].clear();}
        scanf("%d",&r);
        while(r--)
        {
            scanf("%d%d",&x,&y);
            v[x].push_back(y);
            v[y].push_back(x);
        }
        cnt=0;
        for(i=0;i<n;i++)
        {
            if(!visited[i])
            {
                bfs(i);cnt++;
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}
