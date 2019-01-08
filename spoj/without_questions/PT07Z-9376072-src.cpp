#include<cstdio>
#include<cstdlib>
#include<vector>
#include<algorithm>
#include<queue>
#define pii pair<int,int>
using namespace std;

vector<int> v[10001];
queue<int>q;
int visited[10001],maxval;

void dfs(int x,int d)
{
    vector<int>::iterator it;
    visited[x]=1;
    //printf("x=%d\n",x);
    for(it=v[x].begin();it!=v[x].end();++it)
    {
        //printf("andar %d\n",*it);
        if(!visited[*it]){ dfs(*it,d+1); }
        //printf("bahar %d\n",*it);
    }
    visited[x]=0;
    if(d>maxval)
    {
        maxval=d;
        q.pop();
        q.push(x);
    }
}

int calc(int i)
{
    int x,ans=0;
    maxval=0;
    q.push(i);
    dfs(i,0);
    //printf("yahan tak\n");
    while(!q.empty())
    {
        x=q.front();
        maxval=0;
        dfs(x,0);
        q.pop();
        if(maxval>ans) ans=maxval;
        else break;
    }
    return ans;
}

int main()
{
    int n,i,t,x,y;
    scanf("%d",&n);
    while(!q.empty())q.pop();
    for(i=1;i<=n;i++) {visited[i]=0;v[i].clear();}
    t=n-1;
    while(t--)
    {
        scanf("%d %d",&x,&y);
        v[x].push_back(y);
        v[y].push_back(x);
    }
    //printf("main looop clear");
    printf("%d\n",calc(1));
    return 0;
}
