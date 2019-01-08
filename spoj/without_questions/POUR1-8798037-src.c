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

int ct1(int a1,int b1)
{
    int steps=0,fa1=0,fb1=0,chng;
    steps++;
    fa1=a1;
    while(fa1!=c && fb1!=c)
    {
        if(fb1==b1)
        {
            fb1=0;
            steps++;
        }
        else if(fa1==0)
        {
            fa1=a1;
            steps++;
        }
            chng=minm(fa1,b1-fb1);
            fb1+=chng;
            fa1-=chng;
            steps++;
    }
    return steps;
}

int main()
{
    int t,a,b,x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d",&a,&b,&c);
        x=gcd(a,b);
        if(c>a && c>b) printf("-1\n");
        else if(c==a || c==b) printf("1\n");
        else if(c==0) printf("0\n");
        else if(c%x !=0) printf("-1\n");
        else
        {
            //printf("yes\n");
            x=ct1(a,b);
            //printf("%d\n",x);
            y=ct1(b,a);
            printf("%d\n",minm(x,y));
        }
    }
    return 0;
}
