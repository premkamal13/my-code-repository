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

int a[10000];

int main()
{
    int n,m,i;
    scanf("%d%d",&n,&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+m);
    int err=0;
    if(a[0]==1 || a[m-1]==n) err=1;
    else
    {
        for(i=2;i<m;i++)
        {
            if(a[i]==a[i-2]+2) err=1;
        }
    }
    if(err) printf("NO\n");
    else printf("YES\n");
    return 0;
}