#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int a[1000001];

void precompute()
{
    int i,j;
    double fn,gn,v;
    a[2]=4;
    fn=log(2.0);
    j=2;
    for(i=2;i<1000001;i++)
    {
        v=log((double)i);
        gn=(double)j*v;
        //fn+=log((double)j);
        while(fn<gn)
        {
            j++;
            fn+=log((double)j);
            gn=(double)j*v;
        }
        a[i]=j;
    }
}

int main()
{
    int t,p;
    precompute();
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&p);
        printf("%d\n",a[p]);
    }
return 0;
}
