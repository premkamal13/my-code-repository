#include<cstdio>
#include<cstdlib>

int gcd(int a,int b)
{
    if(!b) return a;
    return gcd(b,a%b);
}

int main()
{
    int t,x1,x2,y1,y2;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        int d1=x1-x2;
        int d2=y1-y2;
        if(d1<0) d1=-d1;
        if(d2<0) d2=-d2;
        int gc=gcd(d1,d2);
        printf("%d\n",d1+d2-gc);
    }
    return 0;
}