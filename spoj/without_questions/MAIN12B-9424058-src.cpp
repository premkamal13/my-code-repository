#include<stdio.h>
#include<stdlib.h>
#include<cmath>
#include<set>
#include<vector>
#define len 1000000
#define lli long long int
using namespace std;
lli primes[len];
int k;
void precompute()
{
    auto vector<bool> a(len,true);
    int sq=sqrt(len);
    int i,j,i2,m;
    for(i=3;i<=sq;i+=2)
    {
            while(a[i]==false)
            {
                i+=2;
            }
            j=i*(i-2);
            i2=i<<1;
            while((j=i2+j)<=len)
            {
                a[j]=false;
            }
    }
    primes[0]=2;
    k=1;
    for(i=3;i<=len;i+=2)
    {
        if(a[i]==true) primes[k++]=i;
    }
    //for(i=0;i<100;i++) printf("%d ",primes[i]);
}
lli a[101];
set<lli> s;
set<lli>::iterator it;
int main()
{
    int t,d=1,i,j,n;
    lli p,m;
    precompute();
    scanf("%d",&t);
    while(t--)
    {
        s.clear();
        scanf("%d",&n);
        for(i=0;i<n;i++) scanf("%lld",&a[i]);
        for(i=0;i<n;i++)
        {
            p=a[i];
            //printf("%d",k);
            for(j=0;j<k;j++)
            {
                m=primes[j];
                //printf("(%lld %lld)\n",m,p);
                if(m>p) break;
                if(p%m==0)
                {
                    s.insert(m);
                    while(!(p%m)) p/=m;
                }
            }
            if(p!=1) s.insert(p);
        }
        printf("Case #%d: %d\n",d++,s.size());
        for(it=s.begin();it!=s.end();it++)
        {
            printf("%lld\n",*it);
        }
    }
    return 0;
}
