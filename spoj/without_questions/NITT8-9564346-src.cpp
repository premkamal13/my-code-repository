#include<cstdio>
#include<cstdlib>
#include<vector>
#include<algorithm>
#define pii pair<int,int>
#define F first
#define S second
#define lli long long int
#define INF 1000000001
using namespace std;

lli max1(lli a,lli b)
{
    return(a>b?a:b);
}

bool cmp(pii a,pii b)
{
    if(a.F<b.F) return true;
    if(a.F>b.F) return false;
    return(a.S<b.S);
}

vector<pii> v;
int main()
{
    lli val1,val2,val;
    int t,i,n,x;
    scanf("%d",&t);
    while(t--)
    {
        v.clear();
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&x);
            v.push_back(pii(x,i));
        }
        sort(v.begin(),v.end(),cmp);
        vector<pii>::reverse_iterator it;
        lli maxm,val,minm;
        maxm=-1;
        val=0;
        minm=INF;
        for(it=v.rbegin();it!=v.rend();it++)
        {
            lli x=(lli)(*it).F;
            lli y=(lli)(*it).S;
            val1=x * (y-minm);
            val2=x * (maxm-y);
            val1=max1(val1,val2);
            val=max1(val,val1);
            if(y>maxm) maxm=y;
            if(y<minm) minm=y;
        }
        printf("%lld\n",val);
    }
    return 0;
}
