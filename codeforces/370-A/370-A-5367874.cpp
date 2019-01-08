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
    int r1,r2,f,f1,c1,c2;
    scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
    if(r1==r2 || c1==c2) printf("1 ");
    else printf("2 ");
    int sm=r1+c1;
    if(sm&1) f=1;
    else f=2;
    int sm2=r2+c2;
    if(sm2&1) f1=1;
    else f1=2;
    int x=abs(r1-r2);
    int y=abs(c1-c2);
    if(f!=f1) printf("0 ");
    else if(x==y) printf("1 ");
    else printf("2 ");
    printf("%d\n", max(x,y));
    return 0;
}