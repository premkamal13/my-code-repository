#include<stdio.h>
#include<stdlib.h>

long long int ar[100];

int main()
{
    long long int g,t,a,d,i,x,y,p,s;
    ar[0]=1;
    for(i=1;i<63;i++) ar[i]=ar[i-1]*2;
    while(scanf("%lld %lld %lld %lld",&g,&t,&a,&d),g!=-1)
    {
        s=(g*(t-1)*t)/2+d;
        i=0;
        p=g*a+d;
        while(p>ar[i])i++;
        y=ar[i]-p;
        x=s+g*a-1+y;
        printf("%lld*%lld/%lld+%lld=%lld+%lld\n",g,a,t,d,x,y);
    }
return 0;
}
