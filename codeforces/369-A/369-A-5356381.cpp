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
    int n,b,p, wash,x;
    scanf("%d%d%d",&n,&b,&p);
    wash=0;
    while(n--)
    {
        scanf("%d",&x);
        if(x==1)
        {
            if(b) b--;
            else wash++;
        }
        else if(x==2)
        {
            if(p) p--;
            else if(b) b--;
            else wash++;
        }
    }
    printf("%d\n",wash);
    return 0;
}