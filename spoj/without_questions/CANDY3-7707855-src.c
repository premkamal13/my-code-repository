#include<stdio.h>
int main()
{
    long long int t,i,j,n,a;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        long long int sum=0;
        scanf("%lld",&n);
        for(j=0;j<n;j++)
        {
            scanf("%lld",&a);
            sum=(sum+a)%n;
        }
        if(sum%n==0)
        printf("YES\n");
        else
        printf("NO\n");
    }
    return 0;
}
