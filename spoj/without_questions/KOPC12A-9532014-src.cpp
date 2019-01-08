#include<stdlib.h>
#include<stdio.h>
#include<algorithm>
#include<vector>
#define pii pair<int,int>
#define F first
#define S second
#define lli long long int
using namespace std;
int n;
bool cmp(pii x,pii y)
{
    if(x.F<y.F) return true;
    if(x.F>y.F) return false;
    if(x.S<y.S) return true;
}
pii a[10001];

lli val(int x)
{
    lli cost=0;
    int i;
    for(i=0;i<n;i++)
    {
        cost+=abs(a[i].F-a[x].F)*a[i].S;
    }
    return cost;
}

lli ternary_search(int l,int r)
{
    int m1,m2,i;
    lli minm;
    while(r-l>2)
    {
        m1=(2*l+r)/3;
        m2=(l+2*r)/3;
        if(val(m1)<val(m2)) r=m2;
        else l=m1;
    }
    minm=val(l);
    if(l+1<=r) minm=min(minm,val(l+1));
    if(l+2<=r) minm=min(minm,val(l+2));
    return minm;
}

int main()
{
    int t,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++) scanf("%d",&a[i].F);
        for(i=0;i<n;i++) scanf("%d",&a[i].S);
        sort(a,a+n,cmp);
        //for(i=0;i<n;i++) printf("(%d %d)\n",a[i].F,a[i].S);
        printf("%lld\n",ternary_search(0,n-1));
    }
    return 0;
}
