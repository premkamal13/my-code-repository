#include<stdio.h>
#include<stdlib.h>
#define max(x,y) x>y?x:y
int a[10001],b[10001],dp1[10001],dp2[10001];
int main()
{
    int i,j,n,m;
    while(scanf("%d",&n),n!=0)
    {
        for(i=1;i<=n;i++) scanf("%d",&a[i]);
        scanf("%d",&m);
        for(j=1;j<=m;j++) scanf("%d",&b[j]);
        dp1[0]=0;
        dp2[0]=0;
        i=j=1;
        while(i<=n&& j<=m)
        {
            if(a[i]==b[j])
            {
                dp1[i]=dp1[i-1]+a[i];
                dp2[j]=dp2[j-1]+b[j];
                dp1[i]=dp2[j]=max(dp1[i],dp2[j]);
                i++;j++;
            }
            else if(a[i]<b[j])
            {
                dp1[i]=dp1[i-1]+a[i];
                i++;
            }
            else
            {
                dp2[j]=dp2[j-1]+b[j];
                j++;
            }
        }
        if(i<=n)
        {
            while(i<=n) {dp1[i]=dp1[i-1]+a[i];i++;}
        }
        else
        {
            while(j<=m) {dp2[j]=dp2[j-1]+b[j];j++;}
        }
        printf("%d\n",max(dp1[n],dp2[m]));
    }
    return 0;
}
