//TLE

#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<vector>
#define lli long long int
lli a[101],pwr[101],val[101];int ans[101],final[101];
lli sum;
int n;
void precompute()
{
    int i;
    pwr[0]=1;
    for(i=1;i<63;i++) pwr[i]=pwr[i-1]*2LL;
}

int found,anscount;

int main()
{
    int i,j,t,c,k;
    precompute();
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld %d",&sum,&n);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            ans[i]=0;
            val[i]=a[i];
            j=i-1;
            c=1;
            while(j>=0)
            {
                val[i]+=pwr[c]*a[j];
                c++;
                j--;
            }
        }
        for(j=n-1;j>=0;j--)
        {
            if(val[j]<=sum) {sum-=val[j];ans[j]=1;}
            if(sum==0) break;
        }
        if(sum==0)
        {
            for(i=0;i<n;i++)
            {
                if(ans[i]) printf("%d ",i+1);
            }
            printf("\n");
        }
        else printf("-1\n");
    }
    return 0;
}
