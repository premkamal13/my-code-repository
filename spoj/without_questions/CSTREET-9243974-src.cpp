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
    int t,x,y,n,m,wt,i;
    long long int sm,price;
    scanf("%d",&t);
    while(t--)
    {
        sm=0;
        scanf("%lld %d %d",&price,&n,&m);
        v.resize(m);
        for(i=0;i<m;i++)
        {
            scanf("%d %d %d",&x,&y,&wt);
            v[i]=piii(wt,pii(x,y));
        }
        sort(v.begin(),v.end());
        //for(i=1;i<=n;i++) visited[i]=0;
        for(i=1;i<=n;i++) parent[i]=i;
        //memset(visited,0,sizeof(visited));
        for(i=0;i<m;i++)
        {
            wt=v[i].first;
            x=v[i].second.first;
            y=v[i].second.second;
            /*if(!(visited[x] && visited[y]))
            {
                if(x!=y)
                {
                    sm+=wt;
                    visited[x]=visited[y]=1;
                }
            }*/
            //checking cycle
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
        printf("%lld\n",sm*price);
    }
    return 0;
}
