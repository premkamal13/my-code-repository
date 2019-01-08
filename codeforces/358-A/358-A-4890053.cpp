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

using namespace std;
vector<pii>v;
//int hash[2000011],
int a[1001];

using namespace std;
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int maxim,minim,inf,tmax,tmin;
    int err=0,maxm=inf=tmax=minim=1000000001,minm=tmin=maxim=-1000000001;
    if(n>2)
    {
        /*for(i=1;i<n;i++)
        {
            int x=max(a[i],a[i-1]);
            int y=min(a[i],a[i-1]);

            if(x<=maxm && x>=maxim && y>=minm && y<=minim)
            {
                tmax=maxm;
                tmin=minm;
                maxm=x;
                minm=y;
            }
            else if(x>=maxm && y<=minm && x<=tmax && y>=tmin)
            {
                maxim=min(maxm,maxim);
                minim=max(minm,minim);
                maxm=tmax;
                minm=tmin;
            }
            else { printf("%d %d\n",x,y); err=1; break;}
            printf("%d %d %d %d %d %d\n",minm,maxm,maxim,minim,tmax,tmin);
        }*/
        for(i=1;i<n;i++)
        {
            int x=max(a[i],a[i-1]);
            int y=min(a[i],a[i-1]);
            v.push_back(pii(y,x));
        }
        err=0;
        for(i=1;i<n;i++)
        {
            int v1=min(a[i-1],a[i]),v2=max(a[i-1],a[i]);
            vector<pii>::iterator it;
            for(it=v.begin();it!=v.end();it++)
            {
                pii x=(*it);
                if(x.F>=v2 && x.S>=v2);
                else if(x.F<=v1 && x.S<=v1);
                else if(x.F>=v1 && x.S<=v2);
                else if(x.F<=v1 && x.S>=v2);
                else {err=1;break;}
            }
            if(err) break;
        }
    }
    if(err) printf("yes\n");
    else printf("no\n");
    return 0;
}