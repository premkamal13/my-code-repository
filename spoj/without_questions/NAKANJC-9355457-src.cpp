#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<queue>
#define pii pair<int,int>
#define piii pair<pii,int>
#define F first
#define S second
using namespace std;
#define inf 100001
int ans[8][8],visited[8][8];
char a[2],b[2];

int valid(int i,int j)
{
    if(i<0 || i>=8 || j<0 || j>=8) return 0;
    if(visited[i][j]==1) return 0;
    visited[i][j]=1;
    return 1;
}

int bfs(int i,int j,int di,int dj)
{
    int k=0,xi,xj;
    queue<piii> q;
    q.push(piii(pii(i,j),k));
    visited[i][j]=1;
    while(!q.empty())
    {
        piii x=q.front();
        xi=x.F.F;
        xj=x.F.S;
        k=x.S;
        if(xi==di && xj==dj) return k;
        q.pop();
        if(valid(xi-2,xj-1)) q.push(piii(pii(xi-2,xj-1),k+1));
        if(valid(xi-2,xj+1)) q.push(piii(pii(xi-2,xj+1),k+1));
        if(valid(xi-1,xj-2)) q.push(piii(pii(xi-1,xj-2),k+1));
        if(valid(xi-1,xj+2)) q.push(piii(pii(xi-1,xj+2),k+1));
        if(valid(xi+1,xj-2)) q.push(piii(pii(xi+1,xj-2),k+1));
        if(valid(xi+1,xj+2)) q.push(piii(pii(xi+1,xj+2),k+1));
        if(valid(xi+2,xj-1)) q.push(piii(pii(xi+2,xj-1),k+1));
        if(valid(xi+2,xj+1)) q.push(piii(pii(xi+2,xj+1),k+1));
    }
    return -1;
}

int main()
{
    int srci,srcj,dsti,dstj,t,i,j;
    scanf("%d",&t);
    while(t--)
    {
        //memset(dp,inf,sizeof(dp));
        for(i=0;i<8;i++)for(j=0;j<8;j++) {visited[i][j]=0;}
        scanf("%s %s",a,b);
        srci=a[0]-97;
        srcj=a[1]-49;
        dsti=b[0]-97;
        dstj=b[1]-49;
        //bfs(srci,srcj,dsti,dstj);
        printf("%d\n",bfs(srci,srcj,dsti,dstj));
    }
    return 0;
}
