#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define lli long long int

int main()
{
    int t,i;
    lli tr,p,n;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        p=((n-1)*n*(2*n-1))/3+n*n;
        tr=n*(n-1)*2;
        printf("Pyramid E. Nro# %d: %lld\n",i,p+tr);
        printf("Tringus: %lld\n",tr);
    }
    return 0;
}
