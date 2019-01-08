#include<stdio.h>
#include<stdlib.h>
int n,k;

int max(int x,int y)
{
    return (x>y?x:y);
}

int a[100001];
int valid(int x)
{
    int i,count=0;
    for(i=0;i<n;i++)
    {
        count+=a[i]/x;
    }
    if(count>=k) return 1;
    return 0;
}

int main()
{
    int t,maxm,minm,last,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&k);
        maxm=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            maxm=max(maxm,a[i]);
        }
        minm=last=0;
        while(minm<maxm)
        {
            //printf("%d %d ",minm,maxm);
            int mid=(maxm+minm+1)/2;
            //printf("%d\n",mid);
            if(valid(mid)) {minm=mid;}
            else maxm=mid-1;
            //printf("(%d %d) ",minm,maxm);
        }
        printf("%d\n",minm);
    }
    return 0;
}
