#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<queue>
#include<cmath>
#define inf 10000001
using namespace std;

int g[201][201];
char str[201];
//pair<int,int>p;
struct node
{
    int a;
    int b;
}x,y,p;

typedef struct node node;
int bfs(node p,int n,int m)
{
    int dist,i,j,d;
    queue< node > q;
    q.push(p);
    while(!q.empty())
    {
        x =q.front();
        q.pop();
        for(i=x.a-1;i<=x.a+1;i++)
        {
            for(j=x.b-1;j<=x.b+1;j++)
            {
                if(i>=0 && i<n && j>=0 && j<m)
                {
                    d=abs(p.a-i)+abs(p.b-j);
                    if(d<g[i][j])
                    {
                        g[i][j]=d;
                        y.a=i;
                        y.b=j;
                        q.push(y);
                    }
                }
            }
        }
    }
}

int main()
{
    int t,n,i,j,m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        for(i=0;i<n;i++)
        {
            scanf("%s",str);
            for(j=0;j<m;j++)
            {
                if(str[j]=='0') g[i][j]=inf;
                else g[i][j]=0;
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                p.a=i;p.b=j;
                if(g[i][j]==0) bfs(p,n,m);
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m-1;j++)
            {
                printf("%d ",g[i][j]);
            }
            printf("%d\n",g[i][j]);
        }
    }
    return 0;
}
