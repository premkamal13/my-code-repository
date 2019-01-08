#include<cstdio>
#include<cstdlib>
#include<vector>
#include<utility>
#include<algorithm>
#include<cstring>

#define pii pair<int,int>
#define piii pair<int,pii>

using namespace std;

vector<piii> v;
//int visited[10001];
int parent[10001];
int main()
{
    int x,y,n,m,wt,i;
    long long int sm;
        sm=0;
        scanf("%d %d",&n,&m);
        v.resize(m);
        for(i=0;i<m;i++)
        {
            scanf("%d %d %d",&x,&y,&wt);
            v[i]=piii(wt,pii(x,y));
        }
        sort(v.begin(),v.end());
        for(i=1;i<=n;i++) parent[i]=i;
        for(i=0;i<m;i++)
        {
            wt=v[i].first;
            x=v[i].second.first;
            y=v[i].second.second;

            while(x!=parent[x])
            {
                x=parent[x];
            }
            while(y!=parent[y])
            {
                y=parent[y];
            }
            if(x!=y)
            {
                sm+=wt;
                parent[x]=parent[y];
            }
        }
        printf("%lld\n",sm);
    return 0;
}
