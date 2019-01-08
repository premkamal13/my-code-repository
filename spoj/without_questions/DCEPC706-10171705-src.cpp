#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<queue>
#include<vector>
#define pii pair<int,int>
#define pid pair<pii,int>
#define F first
#define S second
#define INF 1000000001
using namespace std;

int max(int a,int b)
{
    return(a>b?a:b);
}
int min(int a,int b)
{
    return(a<b?a:b);
}

int dist[205][205],visited[205][205],g[205][205];
char s[205][205];
int tx[]={0,-1,1,0};
int ty[]={-1,0,0,1};
int row,col;

int valid(int x,int y)
{
    if(x<0 || y<0 || x>=row+2 ||y>=col+2) return 0;
    if(visited[x][y]) return 0;
    if(g[x][y]==-1) return 0;
    visited[x][y]=1;
    return 1;
}

int bfs(int i,int j)
{
    int d=0,i1,j1;
    for(i1=0;i1<row+2;i1++)
    {
        for(j1=0;j1<col+2;j1++)
        {
            visited[i1][j1]=0;
        }
    }
    queue<pid>q;
    visited[i][j]=1;
    q.push(pid(pii(i,j),d));
    while(!q.empty())
    {
        pid x=q.front();
        q.pop();
        i=x.F.F;
        j=x.F.S;
        d=x.S;
        for(int p=0;p<4;p++)
        {
            int i1=i+tx[p];
            int j1=j+ty[p];
            int d1=d+1;
            if(valid(i1,j1))
            {
                dist[i1][j1]=max(dist[i1][j1],d1);
                q.push(pid(pii(i1,j1),d1));
            }
        }
    }

}

int min_of_max()
{
    int i,j,k,ans=INF;
    for(i=0;i<row+2;i++)
    {
        for(j=0;j<col+2;j++)
        {
            if(g[i][j]!=-1 && dist[i][j]!=-1)
            {
                if(dist[i][j]<ans) ans=dist[i][j];
            }
        }
    }
    return ans;
}


void paint()
{
    for(int i=0;i<row+2;i++)
    {
        for(int j=0;j<col+2;j++)
        {
            printf("%d ",dist[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int t,i,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&row,&col);
        for(i=0;i<row;i++) scanf("%s",s[i]);
        //printf("here\n");
        for(i=0;i<row+2;i++) {g[i][0]=0; g[i][col+1]=0; dist[i][0]=-1; dist[i][col+1]=-1;}
        for(j=0;j<col+2;j++) {g[0][j]=0; g[row+1][j]=0; dist[0][j]=-1; dist[row+1][j]=-1;}
        //printf("here\n");
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(s[i][j]=='.') g[i+1][j+1]=0;
                else if(s[i][j]=='#') g[i+1][j+1]=-1;
                else g[i+1][j+1]=(s[i][j]-48);
                dist[i][j]=-1;
            }
        }
        int cnt=0;
        for(i=1;i<row+1;i++)
        {
            for(j=1;j<col+1;j++)
            {
                if(g[i][j]!=0 && g[i][j]!=-1)
                {
                    bfs(i,j);
                    //printf("bfs(%d %d)\n",i,j);
                    //paint();
                    cnt++;
                    if(cnt>2)break;
                }
            }
        }
        printf("%d\n",min_of_max());
    }
    return 0;
}
