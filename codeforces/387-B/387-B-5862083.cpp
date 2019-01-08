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

int a[3001],b[3001];

int main()
{
    int i,j,n,m;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    sort(a,a+i);
    for(i=0;i<m;i++) scanf("%d",&b[i]);
    sort(b,b+i);
    i=n-1;
    j=m-1;
    int cnt=0;
    while(i>=0 && j>=0)
    {
        if(a[i]<=b[j])
        {
            cnt++;
            i--;
            j--;
        }
        else
        {
            i--;
        }
    }
    printf("%d\n",n-cnt);
    return 0;
}