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

lli mod= 1e9+7;

int main()
{
    lli x,y;
    int n;
    scanf("%I64d %I64d %d",&x,&y,&n);
    n=(n-1)%6;
    lli arr[6]={x,y,y-x,-x,-y,x-y};
    printf("%I64d\n",(arr[n]+2*mod)%mod);
    return 0;
}