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

lli a[100001];

int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%I64d",&a[i]);
    a[n]=-1;
    int st=0;
    int ans=1;
    for(i=1;i<n;i++)
    {
        if(a[i]+a[i-1]!=a[i+1]) {ans=max(ans, i-st+1); st=i;}
    }
    printf("%d\n",ans);
    return 0;
}