#include<stdio.h>
#include<stdlib.h>

int a[51];

int main()
{
    int t,i,f,s,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int f=1,s=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]!=1) f=0;
            s^=a[i];
        }
        if(f)
        {
            if(s) printf("Brother\n");
            else printf("John\n");
        }
        else
        {
            if(s) printf("John\n");
            else printf("Brother\n");
        }
    }
    return 0;
}
