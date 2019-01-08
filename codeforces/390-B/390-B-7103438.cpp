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


int main()
{
    int i,n;
    lli a[100001],b[100001];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%I64d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%I64d",&b[i]);
    }
    lli joy=0;
    for(i=0;i<n;i++)
    {
        if(2*a[i]<b[i] || b[i]==1) joy--;
        else joy+= (b[i]/2)*(b[i]-b[i]/2);
    }
    printf("%I64d\n",joy);
    return 0;
}