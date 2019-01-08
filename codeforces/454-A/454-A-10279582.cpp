// User :: lovelotus ( Prem Kamal )

//#include<bits/stdc++.h>
//#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<climits>
#include<cassert>
#include<iostream>
#include<algorithm>
#include<string>
#include<utility>
#include<cctype>
#include<stack>
#include<queue>
#include<vector>
#include<map>
#include<set>
#include<deque>

#define lli long long int
#define ulli unsigned long long int
#define F first
#define S second
#define pii pair<int,int>
#define pip pair<int,pii>
#define pis pair<int,string>
#define pll pair<lli,lli>

using namespace std;

int main()
{
    int n,i,j,p,k;
    scanf("%d",&n);
    k=n/2;
    p=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j>=k && j<n-k) printf("D");
            else printf("*");
        }
        printf("\n");
        if(i==n/2) p=-1;
        k-=p;
    }
    return 0;
}