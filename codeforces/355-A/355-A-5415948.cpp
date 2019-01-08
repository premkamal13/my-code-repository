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
    int n,k,i,j;
    scanf("%d%d",&n,&k);
    if(!k)
    {
        if(n==1) printf("0\n");
        else printf("No solution\n");
    }
    else if(n>=k)
    {
        for(i=0;i<k;i++) printf("1");
        for(;i<n;i++) printf("0"); printf("\n");
    }
    else
    {
        printf("%d",k);
        for(i=0;i<n-1;i++) printf("0"); printf("\n");
    }
    return 0;
}