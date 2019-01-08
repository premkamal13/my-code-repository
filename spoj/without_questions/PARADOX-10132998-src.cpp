#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<map>
#define pii pair<int,int>
#define F first
#define S second
#include<queue>

using namespace std;

pii link[101];
int err=0;
int visited[101];
char val[11];
int dfs(int node,int tval)
{
    if(visited[node]!=-1)
    {
        if(visited[node]==tval) return 1;
        else return 0;
    }
    visited[node]=tval;
    if(tval==1) return dfs(link[node].F,link[node].S);
    else return dfs(link[node].F,1-link[node].S);
}

int main()
{
    int i,n,id,found;
    while(scanf("%d",&n),n)
    {
        found=1;
        for(i=1;i<=n;i++)
        {
            scanf("%d %s",&id,val);
            link[i]=pii(id,(val[0]=='t'?1:0));
        }

        for(i=1;i<=n;i++)
        {
                fill(visited,visited+n+1,-1);
                if(visited[i]==-1)
                {
                    found=dfs(i,1);
                    if(!found) break;
                }
        }
        if(found) printf("NOT ");
        printf("PARADOX\n");
    }
    return 0;
}
