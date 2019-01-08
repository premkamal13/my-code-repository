#include<cstdio>
#include<cstdlib>
#include<queue>
#define lli long long int
#define pii pair<int,int>
#define pip pair<pii,pii>
#define F first
#define S second
using namespace std;
int travx[]={0,0,0,-1,1};
int travy[]={0,-1,1,0,0};
char g[11][21][21];
int row,col,pat;

int valid(int p,int i,int j)
{
    if(i<0 || i>=row || j<0 || j>=col) return 0;
    if(g[p][i][j]=='1') return 0;
    g[p][i][j]='1';
    return 1;
}

int bfs(int p,int i,int j)
{
    int d,p1,c;
    queue<pip> q;
    q.push(pip(pii(0,p),pii(i,j)));
    while(!q.empty())
    {
        pip x=q.front();
        d=x.F.F;
        p=x.F.S;
        i=x.S.F;
        j=x.S.S;
        q.pop();
        if(i==row-1 && j==col-1) return d;
        p1=p+1;
        if(p1>=pat)p1-=pat;
        for(c=0;c<5;c++)
        {
            if(valid(p1,i+travx[c],j+travy[c])) q.push(pip(pii(d+1,p1),pii(i+travx[c],j+travy[c])));
        }
    }
    return -1;
}

int main()
{
    int n,i,cnt=1;
    while(scanf("%d %d %d",&row,&col,&pat),pat!=0)
    {
        for(n=0;n<pat;n++)
        {
            for(i=0;i<row;i++)
            {
                scanf("%s",g[n][i]);
            }
        }
    int ans=bfs(0,0,0);
    if(ans==-1) printf("Case %d: Luke and Leia cannot escape.\n",cnt++);
    else printf("Case %d: Luke and Leia can escape in %d steps.\n",cnt++,ans);
    }
    return 0;
}
