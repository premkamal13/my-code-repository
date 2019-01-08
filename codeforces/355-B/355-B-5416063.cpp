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

int b[10001];

int main()
{
    int c1,c2,c3,c4,nb,nt,i,j,sb,st;
    scanf("%d%d%d%d",&c1,&c2,&c3,&c4);
    scanf("%d%d",&nb,&nt);
    int sm=0;
    for(i=0;i<nb;i++) scanf("%d",&b[i]);
    for(i=0;i<nb;i++)
    {
        int val=min(c1*b[i],c2);
        sm+=val;
    }
    sb=min(sm,c3);
    sm=0;
    for(i=0;i<nt;i++) scanf("%d",&b[i]);
    for(i=0;i<nt;i++)
    {
        int val=min(c1*b[i],c2);
        sm+=val;
    }
    st=min(sm,c3);
    printf("%d",min(sb+st,c4));
    return 0;
}