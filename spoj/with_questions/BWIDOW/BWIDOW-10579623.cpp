
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
    int i,j,t,n,inmax,outmax,ocnt,inr,outr,inmax2,outmax2,id;
    scanf("%d",&t);
    while(t--)
    {
        inmax=ocnt=0;
        outmax=0;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d%d",&inr,&outr);
            if(inr>inmax) {inmax2=inmax;inmax=inr;id=i;}
            if(outr>outmax) {outmax2=outmax; outmax=outr; ocnt=0;}
            else if(outr>outmax2) outmax2=outr;
            else if(outr==outmax) ocnt++;
        }
        if(ocnt) printf("-1\n");
        else
        {
            if(inmax>outmax2) printf("%d\n",id);
            else printf("-1\n");
        }
    }
    return 0;
}
