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
#define pip pair<int,pii>
#define F first
#define S second
#define lli long long int
using namespace std;

int a[101];

int main()
{
    int t;
    int md,val=0,n,x,p1=0,p2=0,i,j;
    vector<int>v;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        for(j=0;j<x;j++)
        {
            scanf("%d",&a[j]);
        }
        for(j=0;j<x>>1;j++) p1+=a[j];
        if(x&1)
        {
            v.push_back(a[x>>1]);
            j++;
        }
        for(;j<x;j++) p2+=a[j];
    }
    sort(v.begin(),v.end());
    vector<int>::reverse_iterator it;
    int f=1;
    for(it=v.rbegin();it!=v.rend();it++)
    {
        if(f) p1+=(*it);
        else p2+=(*it);
        f=1-f;
    }
    printf("%d %d\n",p1,p2);
    return 0;
}