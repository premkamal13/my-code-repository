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


int main()
{
    lli m,n,k;
    scanf("%I64d%I64d%I64d",&m,&n,&k);
    if(k>n+m-2) printf("-1\n");
    else
    {
        lli ans=1;
        if(k<n) ans = max(ans,m*(n/(k+1)));
        else ans = max(ans, m/(k-n+2));
        if(k<m) ans = max(ans,n*(m/(k+1)));
        else ans = max(ans,n/(k-m+2));
        printf("%I64d\n",ans);
    }
    return 0;
}