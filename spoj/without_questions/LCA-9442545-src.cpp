#include<stdio.h>
#include<stdlib.h>
#include<stack>

using namespace std;

int parent[1001];
int lca(int u,int v)
{
    int ans;
    if(u==1 || v==1) return 1;
    stack<int> su;
    while(u!=1)
    {
        su.push(u);
        u=parent[u];
    }
    stack<int>sv;
    while(v!=1)
    {
        sv.push(v);
        v=parent[v];
    }
    su.push(1);
    sv.push(1);
    while(!(su.empty()) && !(sv.empty()))
    {
        u=su.top();
        v=sv.top();
        su.pop();
        sv.pop();
        if(u==v) ans=u;
        else break;
    }
    return ans;
}

int main()
{
    int t,k=1,i,n,x,a,q,u,v;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&x);
            while(x--)
            {
                scanf("%d",&a);
                parent[a]=i;
            }
        }
        scanf("%d",&q);
        printf("Case %d:\n",k++);
        while(q--)
        {
            scanf("%d%d",&u,&v);
            printf("%d\n",lca(u,v));
        }
    }
    return 0;
}
