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

int a[1001];
int main()
{
    int n,k,i;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    int ans=0;
    for(i=0;i<k;i++)
    {
        int j=i;
        int ones=0,twos=0;
        while(j<n)
        {
            int x=i+j;
            if(a[j]==1) ones++;
            else twos++;
            j+=k;
        }
        if(ones>twos) ans+=n/k-ones;
        else ans+=n/k-twos;
    }
    printf("%d\n",ans);
    return 0;
}