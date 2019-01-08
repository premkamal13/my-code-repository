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

int hash[101][101];
int cnt[101];

int main()
{
    int i,j,k,n,x,m;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=100;j++) hash[i][j]=0;
        scanf("%d",&m);
        for(j=0;j<m;j++)
        {
            scanf("%d",&x);
            hash[i][x]=1;
        }
        cnt[i]=m;
    }
    for(i=1;i<=n;i++)
    {
        int err=0;
        for(j=1;j<=n;j++)
        {
            if(i!=j)
            {
                if(cnt[i]>=cnt[j])
                {
                    int save1=0;
                    for(k=1;k<=100;k++)
                    {
                        if(hash[j][k]==1)
                        {
                            if(hash[i][k]!=1) {save1=1; break;}
                        }
                    }
                    if(!save1) {err=1; break;}
                }
            }
        }
        if(err) printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}