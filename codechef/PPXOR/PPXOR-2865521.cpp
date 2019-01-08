#include<cstdio>
#include<cstdlib>
#define lli long long int

// question reduced to: pairwise sum of xors of all subarrays beginning at first index
lli a[100001],dp[100001];
int main()
{
    int t,i,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int maxm=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            if(a[i]>maxm) maxm=a[i];
        }
        // dp[i] array stores xor of all elements from 0 to i
        int cntmax=0;
        while(maxm)
        {
            maxm>>=1;
            cntmax++;
        }
        dp[0]=a[0];
        for(i=1;i<n;i++) dp[i]=dp[i-1]^a[i];
        //now, to find pairwise sum of xors all elemnts of dp
        lli pw=1;
        lli ans=0;
        for(int bit=1;bit<=cntmax;bit++)
        {
            lli found=0;
            for(i=0;i<n;i++)
            {
                if(dp[i]&pw)
                {
                    found++;
                }
            }
            lli cnt=n-found+1;// the elements whose xor with the found elements is non zero
            ans+=cnt*found*pw;// multiplying to power all non zero pairs
            pw<<=1;
        }
        printf("%lld\n",ans);
    }
    return 0;
}