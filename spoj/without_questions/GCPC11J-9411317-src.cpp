#include<cstdio>
#include<cstdlib>
#include<queue>
#include<vector>

using namespace std;
int visited[100001];
vector<int> v[100001];
queue<int>q;
int maxval;
void dfs(int i,int d)
{
    vector<int>::iterator it;
    visited[i]=1;
    for(it=v[i].begin();it!=v[i].end();it++)
    {
        if(!visited[*it]) dfs(*it,d+1);
    }
    visited[i]=0;
    if(d>maxval)
    {
        maxval=d;
        q.pop();
        q.push(i);
    }
}


int calc(int i)
{
    int ans;
    while(!q.empty()) q.pop();
    q.push(i);
    maxval=0;
    dfs(i,0);
    ans=0;
    while(!q.empty())
    {
        int x=q.front();
        maxval=0;
        dfs(x,0);
        if(maxval>ans) ans=maxval;
        else return ans;
    }
    return 0;
}
int main()
{
    int t,i,n,a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++) {v[i].clear(); visited[i]=0;}
        for(i=0;i<n-1;i++)
        {
            scanf("%d%d",&a,&b);
            v[a].push_back(b);
            v[b].push_back(a);
        }
        printf("%d\n",(1+calc(0))/2);
    }
    return 0;
}
