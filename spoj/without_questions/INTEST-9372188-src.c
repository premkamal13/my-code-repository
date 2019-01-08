#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t,n,cnt,x;
    scanf("%d%d",&n,&t);
    cnt=0;
    while(n--)
    {
        scanf("%d",&x);
        if(x%t==0) cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}
