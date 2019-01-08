#include<stdio.h>

int main()
{
    int t;
    long long int m,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld %lld",&m,&n);
        if(m%2==0 && n%2==0) printf("%lld\n",(m*n)/2);
        else if(m%2==0) printf("%lld\n",(n-1)*m/2);
        else if(n%2==0) printf("%lld\n",(m-1)*n/2);
        else if(m>n) printf("%lld\n",m*(n-1)/2);
        else printf("%lld\n",n*(m-1)/2);
    }
    return 0;
}
