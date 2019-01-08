#include<stdio.h>
#include<stdlib.h>
#define lli long long int
lli a[500001],sum,cnt,val;
lli mod=1000000009;

lli pow1(lli a,lli n)
{
    if(n==0) return 1;
    lli temp=pow1(a,n/2)%mod;
    temp=((temp)%mod*(temp)%mod)%mod;
    if(n&1) temp=((temp)%mod*(a)%mod)%mod;
    return temp%mod;
}

int main()
{
    int t,i,n,ps;
    scanf("%d",&t);
    while(t--)
    {
        ps=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            if(a[i]>=0) ps=1;
        }
        if(ps)
        {
            sum=0;cnt=0;
            for(i=0;i<n;i++)
            {
                if(a[i]>0) {sum+=a[i];}
                else if(a[i]==0) cnt++;
            }
            val=pow1(2,cnt)%mod;
            if(!sum) {val-=1;}
        }
        else
        {
            sum=-2000000000; cnt=1;
            for(i=0;i<n;i++)
            {
                if(a[i]>sum) {sum=a[i];}
                else if(a[i]==sum) cnt++;
            }
            val=cnt;
        }
        cnt=cnt%mod;
        printf("%lld %lld\n",sum,val);
    }
    return 0;
}
