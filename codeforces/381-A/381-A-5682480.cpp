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

int a[1001];

int main()
{
    int i,n,s,d,l,r,f;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    s=d=0;
    l=0;
    r=n-1;
    f=0;
    while(l<=r)
    {
        if(a[l]>a[r])
        {
            if(f) d+=a[l];
            else s+=a[l];
            l++;
        }
        else
        {
            if(f) d+=a[r];
            else s+=a[r];
            r--;
        }
        f=1-f;
    }
    printf("%d %d\n",s,d);
    return 0;
}