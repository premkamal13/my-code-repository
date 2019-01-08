#include<cstdio>
#include<cstdlib>
#include<queue>
#define pii pair<int,int>
#define pid pair<pii,int>
#define F first
#define S second
#define INF 1000000001
using namespace std;
int row,col,srci,srcj,dsti,dstj;
int tx[]={0,-1,1,0};
int ty[]={-1,0,0,1};

int dist[201][201],wall[201][201];
char s[201][201];

int valid(int x,int y,int dst)
{
    if(x<0 || y<0 || x>=row || y>=col) return 0;
    if(dist[x][y]<=dst) return 0;
    dist[x][y]=dst;
    return 1;
}

int flood_fill()
{
    int i,j,d,i1,j1,d1;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++) dist[i][j]=INF;
    }
    queue<pid>q;
    q.push(pid(pii(srci,srcj),0));
    dist[srci][srcj]=0;
    while(!q.empty())
    {
        pid x=q.front();
        i=x.F.F;
        j=x.F.S;
        d=x.S;
        q.pop();
        for(int p=0;p<4;p++)
        {
            i1=i+tx[p];
            j1=j+ty[p];
            d1=d+1;
            if(i1>=0 && j1>=0 && i1<row && j1<col && s[i1][j1]=='#')
            {
                if(d1<wall[i1][j1]) d1=wall[i1][j1];
            }
            if(valid(i1,j1,d1)) q.push(pid(pii(i1,j1),d1));
        }
    }
    return dist[dsti][dstj];
}

int main()
{
    int t,i,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&row,&col);
        for(i=0;i<row;i++) scanf("%s",s[i]);
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                scanf("%d",&wall[i][j]);
            }
        }
        scanf("%d%d",&srci,&srcj);
        scanf("%d%d",&dsti,&dstj);
        printf("%d\n",flood_fill());
    }
    return 0;
}
