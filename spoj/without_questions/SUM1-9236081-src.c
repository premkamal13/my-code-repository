#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t;
    unsigned long long int x,y,z,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%llu",&n);
        x=n/3;
        x=x*(6+(x-1)*3);
        x/=2;
        if(n%3==0) x-=n;
        y=n/5;
        y=y*(10+(y-1)*5);
        y/=2;
        if(n%5==0) y-=n;
        z=n/15;
        z=z*(30+(z-1)*15);
        z/=2;
        if(n%15==0) z-=n;
        //printf("%llu %llu %llu\n",x,y,z);
        printf("%llu\n",x+y-z);
    }
    return 0;
}
