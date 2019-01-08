#include<cstdlib>
#include<cstdio>
#include<vector>
#include<queue>
#include<algorithm>
#define pii pair<int,int>
#include<cstring>
#define F first
#define S second
using namespace std;
vector<int> g[1001];
queue<int>q;
vector<pii>ans;
int in[1001],pos[1001],val[1001],n;

bool cmp(pii a,pii b)
{
    if(a.F<b.F) return true;
    else if(a.F> b.F) return false;
    else return (a.S<b.S);
}

void toposort()
{
    int k=1,m=0,p=1,i,node;
    while(!q.empty()) q.pop();
    for(i=0;i<n;i++)
    {
        if(!in[i])
        {
            q.push(i);
            ans.push_back(pii(k,i));
            val[i]=k;
        }
    }
    //k++;
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
        vector<int>::iterator it;
        //int c=0;
        for(it=g[x].begin();it!=g[x].end();it++)
        {
            node=(*it);
            in[node]--;
            if(!in[node])
            {
                //c++;
                q.push(node);
                ans.push_back(pii(val[x]+1,node));
                val[node]=val[x]+1;
            }
        }
        //if(c) k++;
    }
}

void paint(int p)
{
    printf("Scenario #%d:\n",p);
    sort(ans.begin(),ans.end(),cmp);
    vector<pii>::iterator it1;
    for(it1=ans.begin();it1!=ans.end();it1++)
    {
        printf("%d %d\n",(*it1).F,(*it1).S);
    }
}


int main()
{
    int i,j,t,r,tst,u,v;
    scanf("%d",&t);
    for(tst=1;tst<=t;tst++)
    {
        scanf("%d %d",&n,&r);
        memset(in,0,sizeof(in));
        for(i=0;i<n;i++) g[i].clear();
        ans.clear();
        for(i=0;i<r;i++)
        {
            scanf("%d%d",&u,&v);
            g[v].push_back(u);
            in[u]++;
        }
        toposort();
        paint(tst);
    }
    return 0;
}
