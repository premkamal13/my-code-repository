#include<stdio.h>
#include<stdlib.h>
double a[10001];

void precompute()
{
    int i;
    a[1]=0;
    for(i=2;i<10001;i++) a[i]=a[i-1]+(double)1/(double)i;
}

int main()
{
    int n;
    precompute();
    while(scanf("%d",&n),n!=0)
    printf("With %d competitors, a Jedi Knight will be replaced approximately %.2lf times.\n",n,a[n]);
    return 0;
}
