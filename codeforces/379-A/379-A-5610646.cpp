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


int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int ans=a;
    while(a>=b)
    {
        ans+=a/b;
        a=a/b+a%b;
    }
    printf("%d\n",ans);
    return 0;
}