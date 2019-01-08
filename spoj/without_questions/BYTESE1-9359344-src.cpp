//dijkstra/BFS

#include<cstdio>
#include<cstring>
#include<queue>
#define inf 10000001
#define pii pair<int,int>
#define F first
#define S second
using namespace std;
int dp[101][101],a[101][101];
int xi,xj,m,n;
int valid(int i,int j)
{
    if(i<0 || i>=m || j<0 || j>=n) return 0;
    if(dp[i][j]<=dp[xi][xj]+a[i][j]) return 0;
    dp[i][j]=dp[xi][xj]+a[i][j];
    return 1;
}

void bfs(int i,int j)
{
    queue<pii> q;
    q.push(pii(i,j));
    dp[i][j]=a[i][j];
    while(!q.empty())
    {
        pii x=q.front();
        xi=x.F;
        xj=x.S;
        q.pop();
        if(valid(xi-1,xj)) q.push(pii(xi-1,xj));
        if(valid(xi+1,xj)) q.push(pii(xi+1,xj));
        if(valid(xi,xj-1)) q.push(pii(xi,xj-1));
        if(valid(xi,xj+1)) q.push(pii(xi,xj+1));
    }
}

int main()
{
    int dsti,dstj,t,i,j,time;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&m,&n);
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
                dp[i][j]=inf;
            }
        }
        scanf("%d %d %d",&dsti,&dstj,&time);
        bfs(0,0);
        if(dp[dsti-1][dstj-1]<=time) printf("YES\n%d\n",time-dp[dsti-1][dstj-1]);
        else printf("NO \n");
    }
    return 0;
}
