#include<stdio.h>
#include<stdlib.h>

long long int a[35];

int main()
{
    int t,i;
    long long int ans,ans1,n;
    a[0]=3;a[1]=9;
    for(i=2;i<30;i++)
    a[i]=2*a[i-1]+a[i-2];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        printf("%lld\n",a[n-1]);
    }
    return 0;
}
