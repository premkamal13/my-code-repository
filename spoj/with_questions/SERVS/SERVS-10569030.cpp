
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

lli s[1001],a[1001],ans[1001],inf=1000000001;

using namespace std;
int main()
{
    int n,i,j;
    inf*=inf;
    scanf("%d",&n);
    for(i=n-1;i>=0;i--) scanf("%lld",&a[i]);
    ans[0]=s[0]=a[0];
    for(i=1;i<n;i++)
    {
        ans[i]=inf;
        s[i]= ans[i-1]+ a[i];
        for(j=0;j<i;j++)
        {
            ans[i]=min(ans[i],s[j]+((lli)(i-j)*(i-j+1))/2);
        }
        ans[i]=min(ans[i],ans[i-1]+a[i]);
    }
    //for(i=0;i<n;i++) printf("%lld %lld\n",s[i],ans[i]);
    printf("%lld\n",ans[n-1]);
    return 0;
}
