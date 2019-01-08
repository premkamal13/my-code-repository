#include<stdio.h>
#include<stdlib.h>

int func(int n)
{
    if(n==3 || n==4) return 3;
    if(n==5 || n==6) return 4;
    if(n&1) n+=1;
    n/=2;
    return (1+ func(n));
}

int main()
{
    int n,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("%d\n",func(n));
    }
    return 0;
}
