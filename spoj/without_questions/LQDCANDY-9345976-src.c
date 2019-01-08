#include<stdio.h>
#include<stdlib.h>
#define lli long long int

lli pow2[65];
void precompute()
{
    int i;
    pow2[0]=1;
    for(i=1;i<63;i++) pow2[i]=pow2[i-1]*2;
    //for(i=0;i<63;i++) printf("%d %lld\n",i,pow2[i]);
}

int find(int i,lli n)
{
    lli a,b,c;
    int len=0;
    a=pow2[i-1];
    b=pow2[i];
    if(a==n || b==n) return len;
    else
    {
        len++;
        while(1)
        {
            c=(a+b)/2;
            len++;
            if(n==c) return len;
            else if(n>c) a=c;
            else b=c;
        }
    }
    return len;
}

int main()
{
    int t,ans2,i;
    lli ans1,n;
    precompute();
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        if(n==1)
        {
           ans1=1;
           ans2=0;
        }
        else
        {
            for(i=0;i<65;i++)
            {
                if(pow2[i]>=n) break;
            }
            ans1=pow2[i];
            ans2=find(i,n);
        }
        printf("%lld %d\n",ans1,ans2);
    }
    return 0;
}
