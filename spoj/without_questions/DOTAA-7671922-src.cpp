#include<cstdio>
#include<algorithm>
#include<iostream>

using namespace std;

int main()
{
    long long int t,n,m,d,i;
    int a[20002];
    scanf("%lld",&t);
    while(t--)
    {
              scanf("%lld %lld %lld",&n,&m,&d);
              for(i=0;i<n;i++) scanf("%lld",&a[i]);
              sort(a,a+i);
              for(i=i-1;i>=0;i--)
              {
                                if(a[i]<d) break;
                                while(a[i]>d) {a[i]-=d; m--; }
                                if(m<0) break;
              }
    if(m<=0) printf("YES\n");
    else printf("NO\n");
    }
    return 0;
}
