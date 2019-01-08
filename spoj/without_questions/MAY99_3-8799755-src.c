#include<stdio.h>
#include<stdlib.h>

int c;

int minm(int m,int n)
{
    return (m<n ? m : n);
}

int gcd(int m,int n)
{
    int r,x,y;
    y=minm(m,n);
    x=m+n-x;
    m=x;
    n=y;
    while(m%n)
    {
        r=m%n;
        m=n;
        n=r;
    }
    return n;
}

int main()
{
    int t,a,b,x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&a,&b,&c);
        x=gcd(a,b);
        if(c>a && c>b) printf("NO\n");
        else if(c==a || c==b) printf("YES\n");
        else if(c%x==0) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
