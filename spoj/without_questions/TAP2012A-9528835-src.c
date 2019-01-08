#include<stdio.h>
#include<stdlib.h>

int a[501];

int main()
{
    int i,n,j,k,err;
    while(scanf("%d",&n),n!=-1)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        i=1;
        while(i<=n)
        {
            if(a[i]==i)
            {
                for(j=1;j<i;j++)
                {
                    a[j]++;
                }
                a[i]=0;
                i=1;
            }
            else i++;
            if(i==n+1) break;
        }
        err=0;
        for(i=1;i<=n;i++)
        {
            if(a[i]) {err=1;break;}
        }
        if(err) printf("N\n");
        else printf("S\n");
    }
    return 0;
}
