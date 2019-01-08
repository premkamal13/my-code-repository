#include<stdio.h>
#include<stdlib.h>
// used combinations + vandermonde.s identity.
int main()
{
    int k=1,n,p,q,r,b,t;
    while(scanf("%d %d %d",&n,&p,&q)!=EOF)
    {
        r=q+1;
        t=p+2;
        printf("Case %d: %.4lf\n",k++,(double)r/t);
    }
    return 0;
}
