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
    int i,j,n,k;
    scanf("%d%d",&n,&k);
    int m=n-1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==m) { printf("%d",k-n+1); m--;}
            else printf("1");
            if(j<n-1) printf(" ");
            else printf("\n");
        }
    }
    return 0;
}