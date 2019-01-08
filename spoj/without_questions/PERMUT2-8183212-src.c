#include<stdio.h>
#include<stdlib.h>

int a[100001],b[100001];

int main()
{
    int i,n,er;
    while(scanf("%d",&n),n!=0)
    {
        er=0;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
            b[a[i]]= i;
        }
        //for(i=1;i<=n;i++) printf("(%d %d)\t",a[i],b[i]);
        //printf("\n");
        for(i=1;i<=n;i++)
        {
            if(a[i]!=b[i]) {er=1; break;}
        }
        if(er==0) printf("ambiguous\n");
        else printf("not ambiguous\n");
    }
    return 0;
}
