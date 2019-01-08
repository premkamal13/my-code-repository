#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<vector>
#include<queue>
#define pii pair<int,int>
#define F first
#define S second
using namespace std;
queue<pii> q;
int tx[8]={-2,-2,-1,-1,1,1,2,2};
int ty[8]={-1,1,-2,2,-2,2,-1,1};
int visited[11][11],maxm;
int valid(int i,int j)
{
    if(i<0 || j<0 || j>=10 || i>=10) return 0;
    if(visited[i][j]) return 0;
    return 1;
}
int ans=0;
void dfs(int i,int j,int d)
{
    int p;
    if(!valid(i,j)) return;
    visited[i][j]=1;
    for(p=0;p<8;p++)
    {
         if(valid(i+tx[p],j+ty[p])) dfs(i+tx[p],j+ty[p],d+1);
    }
    visited[i][j]=0;
    if(d>ans)
    ans=d;
}

int main()
{
    int cno=1,i,n,j,x,y,cnt;
    while(scanf("%d",&n),n!=0)
    {
        for(i=0;i<10;i++)for(j=0;j<10;j++) visited[i][j]=1;
        maxm=ans=0;
        for(i=0;i<n;i++)
        {
            scanf("%d %d",&x,&y);
            maxm+=y;
            for(j=x;j<x+y;j++) visited[i][j]=0;
        }
            for(j=0;j<10;j++)
            {
                if(!visited[0][j])
                {
                    dfs(0,j,1);
                    break;
                }
            }
            //printf("%d %d\n",maxm,ans);
        cnt=maxm-ans;
        if(cnt==1) printf("Case %d, %d square can not be reached.\n",cno,cnt);
        else printf("Case %d, %d squares can not be reached.\n",cno,cnt);
        cno++;
    }
    return 0;
}
