#include<cstdio>
#include<cstdlib>
#include<queue>
#include<vector>
#define pii pair<int,int>
#define pid pair<int,pii>
#define F first
#define S second
#include<algorithm>
using namespace std;

vector<pid>a;
int parent[200001];
int n,r;

int kruskal()
{
    int val=0,i,u,v,d;
    for(i=0;i<n;i++) parent[i]=i;
    vector<pid>::iterator it;
    for(it=a.begin();it!=a.end();it++)
    {
        pid x=(*it);
        u=x.S.F;
        v=x.S.S;
        d=x.F;
        while(parent[u]!=u) u=parent[u];
        while(parent[v]!=v) v=parent[v];
        if(u!=v)
        {
            val+=d;
            parent[v]=u;
        }
    }
    return val;
}

int main()
{
    while((scanf("%d %d",&n,&r),n))
    {
        a.clear();
        int sum=0,i,u,v,d;
        for(i=0;i<r;i++)
        {
            scanf("%d%d%d",&u,&v,&d);
            sum+=d;
            a.push_back(pid(d,pii(u,v)));
        }
        sort(a.begin(),a.end());
        int val=kruskal();
        printf("%d\n",sum-val);
    }
    return 0;
}
