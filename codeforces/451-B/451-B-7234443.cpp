// User: lovelotus(Prem Kamal)

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
#define pip pair<int,pii>
#define F first
#define S second
#define lli long long int
using namespace std;

#define INF 1e9+7

int a[100001];

int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int err=0;
    i=0;
    while(i<n-1 && a[i]<=a[i+1] ) i++;
    int bp1=i;
    while(i<n-1 && a[i]>=a[i+1]) i++;
    int bp2=i;
    while(i<n-1 && a[i]<=a[i+1]) i++;
    if(i!=n-1) err=1;
    //printf("(%d %d %d) ",bp1,bp2,err);
    if(bp1==n-1) bp1=bp2=0;
    //printf(" -> (%d %d %d)\n",bp1,bp2,err);
    if(bp2<n-1 && (a[bp2+1] < a[bp1])) err=1;
    else if(bp1>0 && (a[bp1-1] > a[bp2])) err=1;
    if(err) printf("no\n");
    else printf("yes\n%d %d\n",bp1+1,bp2+1);
    return 0;
}