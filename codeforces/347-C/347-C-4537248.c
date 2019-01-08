#include<stdio.h>
#include<stdlib.h>

int gcd(int x,int y)
{
    if(!y) return x;
    else return gcd(y,x%y);
}

int max(int a,int b)
{
    return (a>b?a:b);
}

int main()
{
    int n,x,ans,gc,m,maxm;
    scanf("%d",&n);
    scanf("%d",&x);
    gc=maxm=x;
    m=n;
    n--;
    while(n--)
    {
        scanf("%d",&x);
        gc=gcd(x,gc);
        maxm=max(maxm,x);
    }
    //printf("%d %d %d\n",maxm,gc,m);
    ans=maxm/gc;
    ans-=m;
    if(ans&1) printf("Alice\n");
    else printf("Bob\n");
    return 0;
}