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
using namespace std;

int hash[20001],a[20001],b[20001],dif[20001],ans[20001];
stack<pii>s;
int main()
{
    int n,k,i,j;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
        dif[i]=a[i]-k*b[i];
    }
    ans[10000]=0;
    hash[10000]=1;
    int cnt=1;
    for(i=0;i<n;i++)
    {
        cnt++;
        for(j=0;j<20001;j++)
        {
            if(hash[j] && hash[j]<cnt)
            {
                int j1=j+dif[i];
                if(j1>=0 && j1<20001)
                {
                    if(!hash[j1])
                    {
                        ans[j1]=max(ans[j1],a[i]+ans[j]);
                        hash[j1]=cnt;
                    }
                    else s.push(pii(j1,a[i]+ans[j]));
                }
            }
        }
        while(!s.empty())
        {
            pii x=s.top();
            ans[x.F]=max(ans[x.F],x.S);
            s.pop();
        }
    }
    //for(i=0;i<20001;i++) if(hash[i]) printf("(%d %d)\n",i,ans[i]);
    if(ans[10000]) printf("%d\n",ans[10000]);
    else printf("-1\n");
    return 0;
}