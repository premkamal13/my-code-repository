#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;

int max(int x,int y)
{
    return (x>y?x:y);
}

int a[1001],lis[1001],lds[1001];

int main()
{
    int t,i,j,n,ans;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++) scanf("%d",&a[i]);
        for(i=0;i<n;i++) lis[i]=lds[i]=1;
        for(i=1;i<n;i++)
        {
            for(j=0;j<i;j++)
            {
                if(a[i]>a[j] && lis[i]<lis[j]+1)
                {
                    lis[i]=lis[j]+1;
                }
            }
        }
        for(i=n-2;i>=0;i--)
        {
            for(j=n-1;j>i;j--)
            {
                if(a[i]>a[j] && lds[i]<lds[j]+1)
                {
                    lds[i]=lds[j]+1;
                }
            }
        }
        ans=0;
        for(i=0;i<n;i++)
        {
            //printf("%d %d\n",lis[i],lds[i]);
            ans=max(ans,lis[i]+lds[i]-1);
        }
        printf("%d\n",ans);
    }
    return 0;
}
