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

vector<int>v[100001];
vector<int>::iterator it,it1;
int a[100001],val[100001];
int main()
{
    int i,j,n,k,maxm=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        v[a[i]].push_back(i+1);
        maxm=max(maxm,a[i]);
    }
    //int val=1;
    stack<pii>s;
    int err=0;
    i=1;
    int ercnt=0;
    for(it1=v[0].begin();it1!=v[0].end();it1++)
    {
        ercnt++;
    }
    if(ercnt>1) err=1;
    if(!err)
    {while(i<n)
    {
        it1=v[i-1].begin();
        int cnt=1;
        while(it1!=v[i-1].end() && val[(*it1)]>=k) it1++;
        //printf("yahan\n");
        if(it1!=v[i-1].end() && val[(*it1)]) cnt++;
        for(it=v[i].begin();it!=v[i].end();it++)
        {
            if(it1==v[i-1].end()) {err=1; break;}
            else
            {
                s.push(pii(*it,(*it1)));
                val[(*it)]=1;
                if(cnt<k)
                {
                    cnt++;
                }
                else
                {
                    cnt=1; it1++;
                    while(it1!=v[i-1].end() && val[(*it1)]+1>=k) it1++;
                    if(it1!=v[i-1].end() && val[*it1]) cnt++;
                }
            }
        }
        i++;
        if(i>maxm) break;
        if(err) break;
    }
    }
    if(err)
    {
        printf("-1\n");
        while(!s.empty()) s.pop();
    }
    else
    {
        printf("%d\n",s.size());
        while(!s.empty())
        {
            pii x=s.top();
            printf("%d %d\n",x.F,x.S);
            s.pop();
        }
    }
    return 0;
}