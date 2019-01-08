#include<stdio.h>
#include<stdlib.h>
int a[100001];
int main()
{
    int i,t,n,maxm,sum,cur;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        cur=maxm=0;
        for(i=0;i<n;i++)
        {
            cur+=a[i];
            if(cur<0) cur=0;
            if(cur>maxm) maxm=cur;
        }
        printf("%d\n",2*maxm-sum);
    }
    return 0;
}
