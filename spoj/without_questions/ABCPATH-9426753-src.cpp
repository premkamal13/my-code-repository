#include<stdio.h>
#include<stdlib.h>
#include<cstring>
#include<queue>
#define lli long long int
#define pii pair<int,int>
#define piii pair<int,pii>
#define F first
#define S second
using namespace std;
char a[51][51];
int visited[51][51];
int h,w;

int valid(int x,int x1,int y,int y1)
{
    if(x1<0 || x1>=h || y1<0 || y1>=w) return 0;
    if(visited[x1][y1]) return 0;
    if(a[x1][y1]==a[x][y]+1)
    {
        visited[x1][y1]=1;
        return 1;
    }
    return 0;
}

int bfs(int i,int j)
{
    int maxm=0,d,x,y;
    queue<piii> q;
    q.push(piii(1,pii(i,j)));
    while(!q.empty())
    {
        piii node=q.front();
        q.pop();
        d=node.F;
        x=node.S.F;
        y=node.S.S;
        //visited[x][y]=1;
        if(d>maxm) maxm=d;
        for(i=-1;i<=1;i++)
        {
            for(j=-1;j<=1;j++)
            {
                if(valid(x,x+i,y,y+j))
                {
                    //printf("%d %d\n",x+i,y+j);
                    q.push(piii(d+1,pii(x+i,y+j)));
                }
            }
        }
    }
    return maxm;
}

int main()
{
    int i,j,maxm,x,cnt=1;
    while(scanf("%d%d",&h,&w),h!=0)
    {
        for(i=0;i<h;i++) scanf("%s",&a[i]);
        maxm=0;
        for(i=0;i<h;i++)
        {
            for(j=0;j<w;j++)
            {
                visited[i][j]=0;
            }
        }
        for(i=0;i<h;i++)
        {
            for(j=0;j<w;j++)
            {
                if(a[i][j]=='A')
                {
                    x=bfs(i,j);
                    if(x>maxm) maxm=x;
                }
            }
        }
        printf("Case %d: %d\n",cnt++,maxm);
    }
    return 0;
}
