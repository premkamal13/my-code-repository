#include<cstdio>
#include<cstring>
#include<queue>
#define lli long long int
#define inf 100000001
#define pii pair<int,int>
#define F first
#define S second
using namespace std;
int dp[10][10];
int visited[10][10];
int k=0,xi,xj;
int valid(int i,int j)
{
    if(i<0 || i>=8 || j<0 || j>=8) return 0;
    if(dp[i][j]<=dp[xi][xj]+xi*i+xj*j) return 0;
    dp[i][j]=dp[xi][xj]+xi*i+xj*j;
    return 1;
}

void bfs(int i,int j)
{
    queue<pii> q;
    q.push(pii(i,j));
    dp[i][j]=0;
    //visited[i][j]=1;
    while(!q.empty())
    {
        pii x=q.front();
        xi=x.F;
        xj=x.S;
        visited[xi][xj]=1;
        //if(xi==di && xj==dj) return k;
        q.pop();
        if(valid(xi-2,xj-1)) q.push(pii(xi-2,xj-1));
        if(valid(xi-2,xj+1)) q.push(pii(xi-2,xj+1));
        if(valid(xi-1,xj-2)) q.push(pii(xi-1,xj-2));
        if(valid(xi-1,xj+2)) q.push(pii(xi-1,xj+2));
        if(valid(xi+1,xj-2)) q.push(pii(xi+1,xj-2));
        if(valid(xi+1,xj+2)) q.push(pii(xi+1,xj+2));
        if(valid(xi+2,xj-1)) q.push(pii(xi+2,xj-1));
        if(valid(xi+2,xj+1)) q.push(pii(xi+2,xj+1));
    }
}

int main()
{
    int srci,srcj,dsti,dstj,t,i,j;
    while(scanf("%d",&srci)!=EOF)
    {
        scanf("%d %d %d",&srcj,&dsti,&dstj);
        for(i=0;i<=8;i++)for(j=0;j<=8;j++) {dp[i][j]=inf; visited[i][j]=0;}
        k=0;
        if(srci<0 || srci>7 ||srcj<0 || srcj>7 ||dsti<0 || dsti>7 ||dstj<0 || dstj>7) printf("-1\n");
        else
        {
            bfs(srci,srcj);
             //for(i=0;i<8;i++){for(j=0;j<8;j++) printf("%d ",visited[i][j]); printf("\n");} printf("\n\n");
            if(visited[dsti][dstj]) printf("%d\n",dp[dsti][dstj]);
            else printf("-1 \n");
        }
        //for(i=0;i<8;i++){for(j=0;j<8;j++) printf("%d ",dp[i][j]); printf("\n");}
    }
    return 0;
}
