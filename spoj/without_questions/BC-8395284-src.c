#include<stdio.h>
#include<stdlib.h>

int a[12];
long long int x,y;
int main()
{
    int i,j,m,n,k,t;
    a[0]=1;
    for(i=1;i<12;i++) a[i]=a[i-1]*2;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        scanf("%d %d %d",&n,&m,&k);
        x=(long long int)n*m*k-1;
        for(i=0;a[i]<n;i++); n=i;
        for(i=0;a[i]<m;i++); m=i;
        for(i=0;a[i]<k;i++); k=i;
        //printf("<%d %d %d>\n",n,m,k);
        y=n+m+k;
        printf("Case #%d: %lld %lld\n",j,x,y);
    }
    return 0;
}