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

int n,m;
lli a;
lli bp[100001],pm[100001];
int possible(int x)
{
    int k=0,i=n-1,j=x-1;
    lli extra=0;
    while(j>=0)
    {
        //printf("looop   bp=%d pm=%d\n",bp[j],pm[i]);
        if(bp[j]>pm[i])extra+=bp[j]-pm[i];
        i--;
        j--;
    }
    //printf("(%d %d)",x,extra);
    if(extra<=a) return 1;
    return 0;
}

int main()
{
    int i,j;
    scanf("%d%d%I64d",&n,&m,&a);
    for(i=0;i<n;i++) scanf("%I64d",&pm[i]);
    for(j=0;j<m;j++) scanf("%I64d",&bp[j]);
    sort(pm,pm+n);
    sort(bp,bp+m);
    int rt=min(n,m)+1;
    int lt=0;
    while(lt+1<rt)
    {
        int mid=(lt+rt)>>1;
        if(possible(mid)) lt=mid;
        else rt=mid;
       //printf("%d %d %d\n",lt,rt,mid);
    }
    printf("%d ",lt);
    lli sm=0;
    for(i=0;i<lt;i++)
    {
        sm+=bp[i];
    }
    if(sm>=a) printf("%I64d\n",sm-a);
    else printf("0\n");
    return 0;
}