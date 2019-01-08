#include<stdio.h>

int josepher(int n,int k)
{
    int t;
    if(n==1) return 1;
    else return ((josepher(n-1,k+1)+k-1)%n+1);
}

int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("%d\n",josepher(n,1));
    }
    return 0;
}
