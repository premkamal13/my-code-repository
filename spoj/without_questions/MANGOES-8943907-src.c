#include<stdio.h>
long long int n1;
int main()
{
    int t;
    long long int n,an,s;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        if(n%2!=0) an=n-2;
        else an=n-3;
        n1=(an-1)/2 +1;
        s=(((1+an)*n1)/2)%n;
        printf("%lld\n",s%n);
    }
    return 0;
}
