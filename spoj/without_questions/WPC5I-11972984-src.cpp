
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

map<int,int> factorsM;
map<int,int> factorsN;
map<int,int> factorsK;


lli myPow( lli a, lli n )
{
    if(!n) return 1;
    lli temp = myPow(a, n>>1);
    temp*= temp;
    if(n&1) temp*=a;
    return temp;
}

void findFactorsOfM( int m )
{
    int sq=sqrt(m);
    for(int i=2;i<=sq;i++)
    {
        if(!(m%i))
        {
            while(!(m%i))
            {
                m/=i;
                factorsM[i]++;
            }
        }
    }
    if(m!=1) factorsM[m]++;
}

void findFactorsOfN( int n )
{
    int sq=sqrt(n);
    for(int i=2;i<=sq;i++)
    {
        if(!(n%i))
        {
            while(!(n%i))
            {
                n/=i;
                factorsN[i]++;
            }
        }
    }
    if(n!=1) factorsN[n]++;
}

lli findK()
{
    map<int,int>::iterator it;
    for(it=factorsM.begin();it!=factorsM.end();it++)
    {
        if(factorsN[(*it).F] < (*it).S ) factorsK[(*it).F] = (*it).S;
    }
    for(it=factorsN.begin();it!=factorsN.end();it++)
    {
        if( factorsM[(*it).F] < (*it).S ) factorsK[(*it).F] = (*it).S;
    }
    lli ans =1;

    for(it=factorsK.begin();it!=factorsK.end();it++)
    {
        lli val = myPow((*it).F,(*it).S);
        ans *= val;
    }
    return ans;
}

int main()
{
    int t;
    lli m,n;
    scanf("%d",&t);
    while(t--)
    {
        factorsM.clear();
        factorsN.clear();
        factorsK.clear();
        scanf("%lld%lld",&m,&n);
        findFactorsOfM(m);
        findFactorsOfN(n);
        printf("%lld\n",findK());
    }
    return 0;
}
