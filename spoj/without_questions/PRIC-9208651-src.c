#include<stdio.h>
#include<stdlib.h>
#define UL unsigned long long

UL mulmod(UL a,UL b,UL c)
{
    UL x=0,y=a%c;
    while(b>0)
    {
        if(b&1) x=(x+y)%c;
        y=(y*2)%c;
        b=b/2;
    }
    return x;
}


UL modulo(UL a,UL b,UL c)
{
    UL x=1,y=a%c;
    while(b>0)
    {
         if(b&1) x=mulmod(x,y,c);
         y=mulmod(y,y,c);
         b=b/2;
    }
    return x;
}

int millerrabin(UL p)
{
    UL s=p-1,mod,a,temp;
    int i;
    if(p<2) return 0;
    if(p==2) return 1;
    if(p%2==0) return 0;
    while(s%2==0)
    {
        s/=2;
    }
    a=rand()%(p-1)+1;
        temp=s;
        mod=modulo(a,temp,p);
        while(temp!=p-1 && mod!=1 && mod!=p-1)
        {
            mod=mulmod(mod,mod,p)%p;
            temp*=2;
        }
        if(mod!=p-1 && temp%2==0) return 0;
    return 1;
}
int main()
{
    int i;
    UL s;
    s=1;
    for(i=1;i<33333;i++)
        {
            s=(s+1234567890);
            if(s>2147483648) s-=2147483648;
            if(millerrabin(s)) printf("YES\n");
            else printf("NO\n");
        }
    return 0;
}
