#include<stdio.h>
#include<stdlib.h>
#define UL unsigned long long

UL a[101];

void precompute()
{
    int i;
    a[1]=3;
    for(i=2;i<=66;i++)
    {
        a[i]=3*a[i-1];
    }
}

int main()
{
    int n,x;
    scanf("%d",&n);
    precompute();
    while(n--)
    {
        scanf("%d",&x);
        printf("%llu\n",a[x]-1);
    }
    return 0;
}
