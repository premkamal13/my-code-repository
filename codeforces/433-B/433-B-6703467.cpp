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

lli a[100001],fsm[100001],ssm[100001];

int main()
{
    int n,i,q,t,qs,qe;
    lli sm;
    scanf("%d",&n);
    sm=0;
    for(i=0;i<n;i++)
    {
        scanf("%I64d",&a[i]);
        sm+=a[i];
        fsm[i]=sm;
    }
    sm=0;
    sort(a,a+i);
    for(i=0;i<n;i++)
    {
        sm+=a[i];
        ssm[i]=sm;
    }
    scanf("%I64d",&q);
    while(q--)
    {
        scanf("%d",&t);
        scanf("%d%d",&qs,&qe);
        if(t==1)
        {
            if(qs>1) printf("%I64d\n",fsm[qe-1]-fsm[qs-2]);
            else printf("%I64d\n",fsm[qe-1]);
        }
        else
        {
            if(qs>1) printf("%I64d\n",ssm[qe-1]-ssm[qs-2]);
            else printf("%I64d\n",ssm[qe-1]);
        }
    }
    return 0;
}