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

int dist[205][205][4],visited[205][205],g[205][205];
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

int bfs(int i,int j,int pos)
{
    int d=0,i1,j1;
    for(i1=0;i1<row+2;i1++)
    {
        for(j1=0;j1<col+2;j1++)
        {
            visited[i1][j1]=0;
            dist[i1][j1][pos]=INF;
        }
    }
    queue<pii>q;
    //printf("%d %d %d\n",i,j,pos);
    dist[i][j][pos]=0;
    visited[i][j]=1;
    q.push(pii(i,j));
    while(!q.empty())
    {
        pii x=q.front();
        q.pop();
        i=x.F;
        j=x.S;
        d=dist[i][j][pos];
        for(int p=0;p<4;p++)
        {
            int i1=i+tx[p];
            int j1=j+ty[p];
            int d1=d+1;
            if(valid(i1,j1))
            {
                dist[i1][j1][pos]=d1;
                q.push(pii(i1,j1));
            }
        }
    }
    /*printf("(%d)\n",pos);
    for(i=0;i<row+2;i++)
    {
        for(j=0;j<col+2;j++)
        {
            printf("%d ",dist[i][j][pos]);
        }
        printf("\n");
    }*/
}

int min_of_max()
{
    int i,j,k,ans=INF;
    for(i=0;i<row+2;i++)
    {
        for(j=0;j<col+2;j++)
        {
            if(g[i][j]!=-1)
            {
                int maxm=-1;
                for(k=1;k<4;k++)
                {
                    if(dist[i][j][k]>maxm) maxm=dist[i][j][k];
                }
                if(maxm<ans) ans=maxm;
            }
        }
    }
    return ans;
}

int main()
{
    int t,i,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&row,&col);
        for(i=0;i<row;i++) scanf("%s",s[i]);
        for(i=0;i<row+2;i++) {g[i][0]=0; g[i][col+1]=0;}
        for(j=0;j<col+2;j++) {g[0][j]=0; g[row+1][j]=0;}
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(s[i][j]=='.') g[i+1][j+1]=0;
                else if(s[i][j]=='#') g[i+1][j+1]=-1;
                else g[i+1][j+1]=(s[i][j]-48);
            }
        }
        for(i=1;i<row+1;i++)
        {
            for(j=1;j<col+1;j++)
            {
                if(g[i][j]!=0 && g[i][j]!=-1)
                {
                    bfs(i,j,g[i][j]);
                    //printf("%d %d -> %d\n",i,j,g[i][j]);
                }
            }
        }
        printf("%d\n",min_of_max());
    }
    return 0;
}
