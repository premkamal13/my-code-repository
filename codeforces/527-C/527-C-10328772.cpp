// User :: lovelotus ( Prem Kamal )

//#include<bits/stdc++.h>
//#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<climits>
#include<cassert>
#include<iostream>
#include<algorithm>
#include<string>
#include<utility>
#include<cctype>
#include<stack>
#include<queue>
#include<vector>
#include<map>
#include<set>
#include<deque>

#define lli long long int
#define ulli unsigned long long int
#define F first
#define S second
#define pii pair<int,int>
#define pip pair<int,pii>
#define pis pair<int,string>
#define pll pair<lli,lli>

using namespace std;
char s[2];
set<int>vw,vh;
multiset<int>sw,sh;
int main()
{
    int w,h,q,p;
    scanf("%d%d%d",&w,&h,&q);
    vw.insert(0);
    vw.insert(w);
    sw.insert(w);
    vh.insert(0);
    vh.insert(h);
    sh.insert(h);
    set<int>::iterator it;
    while(q--)
    {
        scanf("%s%d",s,&p);
        if(s[0]=='V')
        {
            vw.insert(p);
            it=vw.find(p);
            it--;
            int prv=*(it);
            it++;
            it++;
            int nxt=*(it);
            sw.erase(sw.find(nxt-prv));
            sw.insert(nxt-p);
            sw.insert(p-prv);
            //cout<<prv<<" "<<nxt<<endl;
        }
        else
        {
            vh.insert(p);
            it=vh.find(p);
            it--;
            int prv=*(it);
            it++;
            it++;
            int nxt=*(it);
            sh.erase(sh.find(nxt-prv));
            sh.insert(nxt-p);
            sh.insert(p-prv);
            //cout<<prv<<" "<<nxt<<endl;
        }
        it=sh.end();
        it--;
        int row=(*it);
        it=sw.end();
        it--;
        int col=(*it);
        printf("%lld\n",1LL*row*col);
    }
    return 0;
}