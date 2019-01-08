#include<cstdio>
#include<cstdlib>
#include<queue>
#include<algorithm>
#include<cstring>
#define inf 100000001
using namespace std;
int f,s,g,u,d;
int arr[1000001],vis[1000001];
int bfs()
{
    //printf("itthe toh aaya\n");
    int x,i,a,b;
    memset(arr,inf,sizeof(arr));
    //memset(vis,0,sizeof(vis));
    queue <int> q;
    q.push(s);
    vis[s]=1;
    arr[s]=0;
    while(!q.empty())
    {
        //printf("in queue\n");
        x=q.front();
        q.pop();
        a=x-d;
        if(a>=1)
        {
            //printf("in\n");
            if(arr[a]>arr[x]+1 && !vis[a])
            {
                q.push(a);
                arr[a]=arr[x]+1;
                vis[a]=1;
            }
            //printf("out\n");
        }
        b=x+u;
        if(b<=f)
        {
            //printf("in\n");
            if(arr[b]>arr[x]+1 && !vis[b])
            {
                q.push(b);
                arr[b]=arr[x]+1;
                vis[b]=1;
            }
            //printf("out\n");
        }
    }
    if(vis[g]==0) return -1;
    else return arr[g];
}

int main()
{
    int x;
    scanf("%d %d %d %d %d",&f,&s,&g,&u,&d);
    x=bfs();
    if(x>=0) printf("%d\n",x);
    else printf("use the stairs\n");
    return 0;
}
