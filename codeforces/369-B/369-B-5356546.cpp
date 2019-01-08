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

stack<int>s;

int main()
{
    int n,k,l,r,sn,sk,i,j,kval,nkval,nkextra,kextra;
    scanf("%d%d%d%d%d%d",&n,&k,&l,&r,&sn,&sk);
    kval=sk/k;
    kextra=sk%k;
    for(i=0;i<kextra;i++) s.push(kval+1);
    while(i<k) {s.push(kval); i++;}
    //printf("size k: %d\n",s.size());
    if(n!=k)
    {
        nkval=(sn-sk)/(n-k);
        nkextra=(sn-sk)%(n-k);
        for(i=0;i<nkextra;i++) s.push(nkval+1);
        while(i<n-k) {i++; s.push(nkval);}
    }
    printf("%d",s.top());
    s.pop();
    while(!s.empty())
    {
        printf(" %d",s.top());
        s.pop();
    }
    printf("\n");
    return 0;
}