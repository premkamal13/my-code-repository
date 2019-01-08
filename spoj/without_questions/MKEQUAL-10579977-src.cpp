
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

int a[1000001];

int main()
{
    int i,sm,n,t,dif;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        sm=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sm+=a[i];
        }
        int mean=sm/n;
        if(n*mean==sm)
        {
            dif=0;
            for(i=0;i<n;i++) dif+=mean-a[i];
            if(dif==0) printf("%d\n",n);
        }
        else printf("%d\n",n-1);
    }
    return 0;
}
