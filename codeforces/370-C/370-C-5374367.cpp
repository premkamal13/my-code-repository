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

int a[5001],b[5001];

int main()
{
    int n,i,j,k,m,sm=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+i);
    for(i=0;i<n;i++)
    {
        b[i]=a[(i+n/2)%n];
    }
    int cnt=0;
    for(i=0;i<n;i++)
    {
        if(a[i]!=b[i]) cnt++;
    }
    printf("%d\n",cnt);
    for(i=0;i<n;i++) printf("%d %d\n",a[i],b[i]);
    return 0;
}