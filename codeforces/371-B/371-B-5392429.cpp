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

int gcd(int a,int b)
{
    if(!b) return a;
    return gcd(b,a%b);
}

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int gc=gcd(a,b);
    int x=a/gc;
    int y=b/gc;
    int cnt=0;
    while(x%2==0) {x/=2; cnt++;}
    while(x%3==0) {x/=3; cnt++;}
    while(x%5==0) {x/=5; cnt++;}
    int cnt1=0;
    while(y%2==0) {y/=2; cnt1++;}
    while(y%3==0) {y/=3; cnt1++;}
    while(y%5==0) {y/=5; cnt1++;}
    if((x==1) && (y==1))
    {
        printf("%d\n",cnt+cnt1);
    }
    else printf("-1");
    return 0;
}