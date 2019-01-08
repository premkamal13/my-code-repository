#include<stdio.h>
#include<stdlib.h>

double a[100001];
void precompute()
{
    int i;
    a[1]=1.00000000;
    for(i=2;i<100001;i++)
    {
        a[i]=a[i-1]+(double)1.00000000/(double)i;
    }
}

int main()
{
    int t,n;
    precompute();
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("%.6lf\n",a[n]);
    }
    return 0;
}
