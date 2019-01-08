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

int a[100001];

int main()
{
    int n,k,i,id;
    int ans=1000000001;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=k;i<n;i++) a[i%k]+=a[i];
    for(i=0;i<k;i++) {if(a[i]<ans) {ans=a[i]; id=i+1;} }
    printf("%d\n",id);
    return 0;
}