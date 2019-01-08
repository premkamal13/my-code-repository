#include<cstdio>
#include<cstdlib>
#include<queue>
#include<cstring>
#define pii pair<int,int>

using namespace std;
char a[251][251];
int visited[251][251];
int n,m,s,w,esc;

int valid(int i,int j)
{
    if(i<0 || i>=n || j<0 || j>=m) return 0;
    if(visited[i][j]) return 0;
    if(a[i][j]=='#') return 0;
    if(i==0 || j==0 || i==n-1 || j==m-1) esc=1;
    visited[i][j]=1;
    return 1;
}

void dfs(int i,int j)
{
    if(!valid(i,j)) return;
    if(a[i][j]=='k') s++;
    else if(a[i][j]=='v') w++;
    dfs(i+1,j);
    dfs(i-1,j);
    dfs(i,j+1);
    dfs(i,j-1);
}

int main()
{
    int i,j,ts,tw;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++) scanf("%s",a[i]);
    memset(visited,0,sizeof(visited));
    ts=tw=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {

            if(a[i][j]!='#' && (!visited[i][j]))
            {
                s=w=esc=0;
                dfs(i,j);
                //printf("(%d %d)(%d %d %d)\n",i,j,s,w,esc);
                if(esc)
                {
                    ts+=s;
                    tw+=w;
                }
                else
                {
                    if(s>w){ts+=s;}
                    else tw+=w;
                }
            }
        }
    }
    printf("%d %d\n",ts,tw);
    return 0;
}
