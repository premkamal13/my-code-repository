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

int hash[11];

int main()
{
    int n,k,i,err,x,y;
    scanf("%d%d",&n,&k);
    int cnt=0;
    while(n--)
    {
        scanf("%d",&x);
        int err=0;
        for(i=0;i<10;i++) hash[i]=0;
        while(x)
        {
            int y=x%10;
            hash[y]=1;
            x/=10;
        }
        for(i=0;i<=k;i++) if(!hash[i]) err=1;
        if(!err) cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}