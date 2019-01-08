
// User: lovelotus

//#include<bits/stdc++.h>
//#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<map>
#include<string>
#include<vector>
#include<queue>
#include<cstring>
#include<cstdlib>
#include<cassert>
#include<cmath>
#include<stack>
#include<set>
#include<utility>
#define pii pair<int,int>
#define pip pair<int,pair>
#define F first
#define S second
#define lli long long int
#define INF 10000001
using namespace std;

char s[21][21];

int dti[11],dtj[11],id,sdist[11][11],dist[21][21],r,c,dp[2049][11] ;

int tx[]={-1,0,0,1};
int ty[]={0,-1,1,0};

int valid(int i,int j)
{
    if(i<0 || i>=r || j<0 || j>=c) return 0;
    if(s[i][j]=='x') return 0;
    if(dist[i][j]!=-1) return 0;
    return 1;
}

void flood_fill(int x1,int y1)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++) dist[i][j]=-1;
    }
    queue<pii>q;
    q.push(pii(x1,y1));
    dist[x1][y1]=0;
    while(!q.empty())
    {
        pii x=q.front();
        q.pop();
        i=x.F;
        j=x.S;
        int dd=dist[i][j];
        for(int p=0;p<4;p++)
        {
            int i1=i+tx[p];
            int j1=j+ty[p];
            if(valid(i1,j1))
            {
                dist[i1][j1]=dd+1;
                q.push(pii(i1,j1));
            }
        }
    }
   /* for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++) printf("%d ",dist[i][j]);
        printf("\n");
    }*/
}

int func(int mask,int node)
{
    //printf("%d %d\n",mask,node);
    if(dp[mask][node]!=-1) return dp[mask][node];
    int res=INF;
    int cnt=0;
    for(int i=0;i<id;i++)
    {
        if(i!=node && (mask&(1<<i)))
        {
            res=min(res,func(mask^(1<<node),i)+sdist[i][node]);
            cnt++;
        }
    }
    if(!cnt) res=0;
    return (dp[mask][node]=res);
}

int main()
{
    int ans=-1;
    while(scanf("%d%d",&c,&r),c)
    {
        int i,srci,j,srcj,err=0;
        id=0;
        for(i=0;i<r;i++)
        {
            scanf("%s",s[i]);
            for(j=0;j<c;j++)
            {
                if(s[i][j]=='o') {srci=i; srcj=j;}
                else if(s[i][j]=='*')
                {
                    dti[id]=i;
                    dtj[id]=j;
                    id++;
                }
            }
        }
        flood_fill(srci,srcj);
        for(i=0;i<id;i++)
        {
            if(dist[dti[i]][dtj[i]]==-1) err=1;
            sdist[id][i]=dist[dti[i]][dtj[i]];
        }
        //for(i=0;i<id;i++) printf("%d ",sdist[id][i]);
        //printf(">>\n");
        //int k;
        //scanf("%d",&k);
        //for(i=0;i<id;i++) printf("%d\n",sdist[id][i]);
        if(!err)
        {
            for(i=0;i<id;i++)
            {
                flood_fill(dti[i],dtj[i]);
                for(j=0;j<id;j++)
                {
                    sdist[i][j]=dist[dti[j]][dtj[j]];
                }
            }
            // dp for hamiltonian path
            for(i=0;i<(1<<id);i++)
            {
                for(j=0;j<id;j++)
                {
                    dp[i][j]=-1;
                }
            }
            ans=INF;
            for(i=0;i<id;i++)
            {
                ans=min(ans,sdist[id][i]+ func((1<<id)-1,i));
            }
        }
        if(err) printf("-1\n");
        else printf("%d\n",ans);
    }
    return 0;
}
