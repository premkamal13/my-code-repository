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
    int n,f,c1,j1,c2,i,j2;
    scanf("%d",&n);
    f=0;
    for(i=1;i<=4;i++)
    {
        scanf("%d%d%d%d",&c1,&c2,&j1,&j2);
        if((!f) && c1+j1<=n){f=1; printf("%d %d %d\n",i,c1,n-c1);}
        if((!f) && c1+j2<=n){f=1; printf("%d %d %d\n",i,c1,n-c1);}
        if((!f) && c2+j1<=n){f=1; printf("%d %d %d\n",i,c2,n-c2);}
        if((!f) && c2+j2<=n){f=1; printf("%d %d %d\n",i,c2,n-c2);}
    }
    if(!f) printf("-1\n");
    return 0;
}