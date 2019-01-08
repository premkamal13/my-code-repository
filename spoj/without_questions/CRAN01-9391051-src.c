#include<stdio.h>
#include<stdlib.h>
int max(int a,int b)
{
    return(a>b?a:b);
}

int main()
{
    int t,n,m,x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&m);
        scanf("%d%d",&x,&y);
        int a=max(n-x,x-1);
        int b=max(m-y,y-1);
        printf("%d\n",a+b);
    }
    return 0;
}
