
// User: lovelotus(Prem Kamal)

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
#define pip pair<int,pii>
#define F first
#define S second
#define lli long long int
using namespace std;

int minBinSearch( int x, int l, int r )
{
    if(l+1>=r)
    {
        if( 2*l>x ) return l;
        else return r;
    }
    int mid=(l+r)>>1;
    if( 2* mid > x ) return minBinSearch( x, l, mid );
    else return minBinSearch( x, mid+1, r );
}


int maxBinSearch( int x, int l, int r, int n )
{
    if(l+1>=r)
    {
        if( 2*r-x<=3*n ) return r;
        return l;
    }
    int mid=(l+r)>>1;
    if( 2* mid - x <= 3*n ) return maxBinSearch( x, mid ,r , n );
    else return maxBinSearch( x, l, mid-1, n );
}


int findRange( int x, int n )
{
    int minLimit = minBinSearch ( x, 1, 2*n );
    int maxLimit = maxBinSearch ( x, 1, 2*n, n);
    int range = maxLimit - minLimit + 1;
    return range;
}

lli findGCD( lli a, lli b )
{
    if(!b) return a;
    return findGCD( b, a%b );
}

int main()
{
    int t,i,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        lli apCount=0;
        /*for(i=1;i<=n;i++)
        {
            apCount+=findRange(i, n);
        }*/
        apCount = (3ll*n*n + 1)/2ll;
        lli maxCount = 6ll*n*n*n;
        lli gcd = findGCD ( apCount, maxCount );
        //printf("%lld %lld\n", apCount, maxCount );
        printf("%lld/%lld\n", apCount/gcd, maxCount/gcd );
    }
    return 0;
}
