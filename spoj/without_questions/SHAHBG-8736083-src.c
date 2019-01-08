#include<stdio.h>
#include<stdlib.h>

int a[20005];

int main()
{
    int i,c,x,n;
    for(i=1;i<20001;i++) a[i]=0;
    a[0]=a[20001]=0;
    scanf("%d",&n);
    c=0;
    while(n--)
    {
        scanf("%d",&x);
        a[x]=1;
        if(a[x-1]==1 && a[x+1]==1)
        {
            c--;
        }
        else if(a[x-1]==0 && a[x+1]==0)
        {
            c++;
        }
        else if(x==1)
        {
            if(!a[2]) c++;
        }
        else if(x==20000)
        {
            if(!a[19999]) c++;
        }
        printf("%d\n",c);
    }
    printf("Justice\n");
    return 0;
}
