
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
#define ulli unsigned long long int
using namespace std;

ulli dp[101];

/*void func(int run,int ball)
{

    if(ball>10) return;
    if(run<=0 || run>6) return;
    //printf("%d %d\n",run,ball);
    dp[ball]++;
    func(run+2,ball+1);
    func(run,ball+1);
    func(run-2,ball+1);
}*/

void precompute()
{
    dp[0]=1;
    dp[1]=3;
    for(int i=2;i<51;i++)
    {
        dp[i]=dp[i-1]*2+dp[i-2];
    }
}


int main()
{
    int t,i,x;
    //for(i=2;i<7;i+=2) func(i,1);
    precompute();
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&x);
        printf("%llu\n",dp[x]);
    }
    return 0;
}
