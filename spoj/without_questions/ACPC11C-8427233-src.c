#include<stdio.h>
#include<stdlib.h>

int min(int a,int b)
{
    if(a<b) return a;
    else return b;
}

int max(int a,int b)
{
    if(a>b) return a;
    else return b;
}

int main()
{
    int a[100001],s,t,i,n,y,x,p,q,d;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        s=0;
        for(i=0;i<n;i++) {scanf("%d",&a[i]);s+=a[i];}
        x=0;
        d=1000000001;
        for(i=0;i<n;i++)
        {
            y=s-a[i];
            p=min(x,y-x);
            q=max(x,y-x);
            x+=a[i];
            d=min(d,2*p+q);
        }
        printf("%d\n",d);
    }
    return 0;
}
