#include<cstdio>
#include<cstdlib>
#include<map>
using namespace std;
#define lli long long int
int a[1000001];
map<int,int> m;
int main()
{
    lli ans;
    int sum,t,i,n;
    scanf("%d",&t);
    while(t--)
    {
        sum=ans=0;
        m.clear();
        m[0]=1;
        scanf("%d",&n);
        for(i=0;i<n;i++) scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        {
            sum+=a[i];
            if(m[sum]) ans+=m[sum];
            m[sum]++;
        }
        printf("%lld\n",ans);
    }
    return 0;
}
