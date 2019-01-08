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

void prin(int x)
{
    if(x<5) printf("O-|");
    else
    {
        printf("-O|");
        x-=5;
    }
    if(!x) printf("-OOOO");
    else if(x==1) printf("O-OOO");
    else if(x==2) printf("OO-OO");
    else if(x==3) printf("OOO-O");
    else printf("OOOO-");
}

int main()
{
    int n;
    scanf("%d",&n);
    if(!n) printf("O-|-OOOO");
    else
    {
        while(n)
        {
            int x=n%10;
            prin(x);
            printf("\n");
            n/=10;
        }
    }
    return 0;
}