#include<stdio.h>
#include<stdlib.h>
#define iterations 10
//topcoder tutorial miller rabin

/*unsigned long long int modulo(unsigned long long int a,unsigned long long int b,unsigned long long int c)
{
    unsigned long long int x;
    if(b==1) return a;
    x=(modulo(a,b/2,c))%c;
    x=((x%c)*(x%c))%c;
    if(x%2!=0) x=((x%c)*(a%c))%c;
    return x;
}*/
unsigned long long mulmod(unsigned long long a,unsigned long long b,unsigned long long c)
{
    unsigned long long x=0,y=a%c;
    while(b>0)
    {
        if(b&1) x=(x+y)%c;
        y=(y*2)%c;
        b=b/2;
    }
    return x;
}


unsigned long long modulo(unsigned long long a,unsigned long long b,unsigned long long c)
{
    unsigned long long x=1,y=a%c;
    while(b>0)
    {
         if(b&1) x=mulmod(x,y,c);
         y=mulmod(y,y,c);
         b=b/2;
    }
    return x;
}

int millerrabin(unsigned long long p)
{
    unsigned long long s=p-1,mod,a,temp;
    int i;
    if(p<2) return 0;
    if(p==2) return 1;
    if(p%2==0) return 0;
    while(s%2==0)
    {
        s/=2;
    }
    for(i=0;i<iterations;i++)
    {
        a=rand()%(p-1)+1;
        temp=s;
        mod=modulo(a,temp,p);
        while(temp!=p-1 && mod!=1 && mod!=p-1)
        {
            //mod=(mod*mod)%p;
            mod=mulmod(mod,mod,p)%p;
            temp*=2;
        }
        if(mod!=p-1 && temp%2==0) return 0;
    }
    return 1;
}
int main()
{
    int t;
    unsigned long long n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%llu",&n);
        if(millerrabin(n)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
