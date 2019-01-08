#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#define lli long long int
using namespace std;

int a[100001];

int main()
{
    int i,t,n,err;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        err=0;
        if(n==1)
        {
            if(a[0]!=0) err=1;
        }
        else
        {
            err=0;
            for(i=1;i<n;i++)
            {
                if(a[i]<a[i-1]) {err=1;break;}
                else if(a[i]>=a[i-1]){a[i]-=a[i-1];}
            }
            if(a[n-1]) err=1;
        }
        if(err) printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}
