#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<set>
#include<iostream>
#define lli long long int
using namespace std;

int main()
{
    multiset<lli> s;
    multiset<lli>::iterator it;
    int n,i;
    lli x,a,b,val;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&x);
        s.insert(x);
        //printf("inserted\n");
    }
    //printf("no error yet\n");
    lli sum=0;
    for(i=0;i<n-1;i++)
    {
        it=s.begin();
        a=*it;
        //printf("%lld ",a);
        s.erase(it);
        it=s.begin();
        b=*it;
        //printf("%lld = ",b);
        s.erase(it);
        val=a+b;
        //printf("%lld\n",val);
        s.insert(val);
        sum+=val;
        //printf("iteration  %d\n",i);
    }
    //it=s.begin();
    //sum+=*it;
    printf("%lld\n",sum);
    return 0;
}
