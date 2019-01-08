#include<stdio.h>
#include<stdlib.h>
#define lli long long int
int cmp(const void *x,const void *y)
{
    return *(int*)x>*(int*)y;
}
int a[20001];
int main()
{
    int n,i,j,k;
    lli count;
    while(scanf("%d",&n),n!=0)
    {
        for(i=0;i<n;i++) scanf("%d",&a[i]);
        qsort(a,n,sizeof(a[0]),cmp);
        count=0;
        for(i=0;i<n-2;i++)
        {
            k=i+2;
            for(j=i+1;j<n;j++)
            {
                while(k<n && a[i]+a[j]>=a[k]) ++k;
                count+=n-k;
            }
        }
        //lli ans=(((n*(n-1))/2)*(n-2))/3;
        printf("%lld\n",count);
    }
    return 0;
}
