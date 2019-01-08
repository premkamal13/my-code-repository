// User :: lovelotus ( Prem Kamal )

//#include<bits/stdc++.h>
//#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<climits>
#include<cassert>
#include<iostream>
#include<algorithm>
#include<string>
#include<utility>
#include<cctype>
#include<stack>
#include<queue>
#include<vector>
#include<map>
#include<set>
#include<deque>

#define lli long long int
#define ulli unsigned long long int
#define F first
#define S second
#define pii pair<int,int>
#define pip pair<int,pii>
#define pis pair<int,string>
#define pll pair<lli,lli>

using namespace std;

int a[100001];
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    int cnt=0,pos=n;
    int err=0;
    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            cnt++;
            pos=i+1;
        }
    }
    if(cnt)
    {
        if(a[n-1]>a[0]) err=1;
    }
    if(err || cnt>1) printf("-1\n");
    else printf("%d\n",n-pos);
    return 0;
}