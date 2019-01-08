#include<stdio.h>
#include<stdlib.h>
#define lli long long int
lli a[1000001];
int main()
{
    int i,n;
    lli s,sum,ans,k,t;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++) scanf("%lld",&a[i]);
        s=sum=ans=0;
        i=n-1;
        while(i>0)
        {
            s+=a[i];
            sum+=s+a[i];
            if(s<0)
            {
                ans+=sum;
                s=sum=0;
            }
            i--;
        }
        ans+=sum+a[0];
        printf("%lld\n",ans);
    }
    return 0;
}
