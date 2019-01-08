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
#define INF 1000000001
#define lli long long int
using namespace std;

int a[150001];

int main()
{
    int i,n,id,k;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    int ans, sm=0;
    id=1;
    for(i=0;i<k;i++) sm+=a[i];
    ans=sm;
    for(i=k;i<n;i++)
    {
        sm+=a[i]-a[i-k];
        if(sm<ans){ans=sm; id=i-k+2;}
    }
    printf("%d\n",id);
    return 0;
}