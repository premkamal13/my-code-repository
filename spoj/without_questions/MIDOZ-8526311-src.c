#include<stdio.h>
#include<stdlib.h>

int a,n,k,s,i,t;

int main()
{
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&k);
        s=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a);
            s+=a/k;
        }
        printf("%d\n",s);
    }
    return 0;
}
