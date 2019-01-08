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

int a[100001],cnt[100001];

int main()
{
    int n,maxm,i,ans;
    scanf("%d",&n);
    maxm=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        maxm=max(a[i],maxm);
        cnt[a[i]]++;
    }
    ans=0;
    for(i=1;i<maxm;i++)
    {
        if(cnt[i]>2) cnt[i]=2;
        ans+=cnt[i];
    }
    ans+=1;
    cnt[maxm]=1;
    printf("%d\n",ans);
    for(i=1;i<maxm;i++) if(cnt[i]>1) printf("%d ",i);
    printf("%d",maxm);
    for(i=maxm-1;i>0;i--)
    {
        if(cnt[i]) printf(" %d",i);
    }
    printf("\n");
    return 0;
}