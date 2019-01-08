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

char s[1000001];

map<pii,int>m;

int main()
{
    scanf("%s",s);
    int i,x=strlen(s);
    int cnta=0,cntb=0;
    lli ans=0;
    m[pii(0,0)]=1;
    for(i=0;i<x;i++)
    {
        if(s[i]=='A') cnta++;
        else if(s[i]=='B') cntb++;
        else {cnta--;cntb--;}
        ans+=m[pii(cnta,cntb)];
        m[pii(cnta,cntb)]++;
    }
    printf("%lld\n",ans);
    return 0;
}