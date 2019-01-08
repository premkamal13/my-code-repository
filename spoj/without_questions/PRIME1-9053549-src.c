#include<stdio.h>
#include<stdlib.h>

int a[100001];

int main()
{
    int n,m,i,j,t,x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        for(i=0;i<=m-n;i++) a[i]=1;
        for(i=2;i*i<=m;i++)
        {
            x=n/i;
            y=i*x;
            if(y<n) y+=i;
            for(j=y;j<=m;j+=i)
            {
                if(j!=i) a[j-n]=0;
            }
        }
        if(n!=1 && a[0]) printf("%d\n",n);
        for(i=1;i<=m-n;i++)
        {
            if(a[i]) printf("%d\n",i+n);
        }
        printf("\n");
    }
    return 0;
}
