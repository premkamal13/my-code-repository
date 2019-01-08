#include<stdio.h>
#include<stdlib.h>
int a[2001];
int main()
{
    int t,q=1,i,j,n,k,c,p,pos,max;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++) scanf("%d",&a[i]);
        printf("Case %d:",q++);
        if(n<10) printf(" go home!\n");
        else
        {
            j=-1;
            c=0;
            max=0;
            p=11;
            while(p)
            {
                max=0;pos=0;
                for(i=j+1;i<=n-p;i++)
                {
                    if(a[i]>max) {max=a[i];pos=i;}
                }
                j=pos;
                p--;
                printf(" %d",a[pos]);
            }
            printf("\n");
        }
    }
    return 0;
}
