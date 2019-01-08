#include<stdio.h>
#include<stdlib.h>
int a[1000001],n,cows;
int cmp(const void *a,const void *b)
{
    return (*(int *)a - *(int *)b );
}

int check(int x)
{
    int i,c=1,prev=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]-prev>=x)
        {
            c++;
            prev=a[i];
        }
    }
    if(c>=cows) return 1;
    else return 0;
}

int main()
{
    int t,i,minm,maxm;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&cows);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        qsort(a,n,sizeof(a[0]),cmp);
        //for(i=0;i<n;i++) printf("%d ",a[i]);
        //printf("\n%d\n",check(3));
        minm=0;
        maxm=a[n-1];
        while(minm<=maxm)
        {
            int mid=(minm+maxm)>>1;
            if(check(mid)) minm=mid+1;
            else maxm=mid-1;
        }
        printf("%d\n",minm-1);
    }
    return 0;
}
