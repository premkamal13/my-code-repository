#include<cstdio>
#include<cstdlib>
#include<vector>
#include<cstring>
#include<queue>
#define pii pair<int,int>
#define pid pair<pii,int>
#define F first
#define S second
#define INF 1000000001
using namespace std;

char s[51][51];
int visited[41][21],dist[41][21];
int tx[]={0,-1,1,0};
int ty[]={-1,0,0,1};
int row,col;

int valid(int x,int y,int val)
{
    if(x<0 || y<0 ||x>=row | y>=col) return 0;
    if(s[x][y]=='#') return 0;
    if(dist[x][y]<=val) return 0;
    dist[x][y]=val;
    return 1;
}

int bfs(int i,int j)
{
    int i1,j1,v;
    for(i1=0;i1<row;i1++)
    {
        for(j1=0;j1<col;j1++) dist[i1][j1]=INF;
    }
    int dst;
    queue<pid>q;
    q.push(pid(pii(i,j),0));
    dist[i][j]=0;
    while(!q.empty())
    {
        pid x=q.front();
        i=x.F.F;
        j=x.F.S;
        dst=x.S;
        q.pop();
        for(int p=0;p<4;p++)
        {
            i1=i+tx[p];
            j1=j+ty[p];
            v=(s[i1][j1]=='s'?1:0);
            if(valid(i1,j1,dst+v))
            {
                q.push(pid(pii(i1,j1),dst+v));
            }
        }
    }
    int ans=INF;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(s[i][j]=='@' && dist[i][j]<ans) ans=dist[i][j];
        }
    }
    return ans;
}

int main()
{
    int ttl,i,j,ans;
    scanf("%d%d%d",&row,&col,&ttl);
    for(i=0;i<row;i++) scanf("%s",s[i]);
    ans=INF;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(s[i][j]=='x') { ans=bfs(i,j); break; }
        }
    }
    ttl>>=1;
    if(ttl>=ans) printf("SUCCESS\n");
    else printf("IMPOSSIBLE\n");
    return 0;
}
