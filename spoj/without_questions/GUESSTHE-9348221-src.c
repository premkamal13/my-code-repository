#include<stdio.h>
#include<stdlib.h>

#define lli long long int

char s[25];
int notdiv[25];

lli hcf(lli a,lli b)
{lli temp;
    if(a<b)
    {
        temp=b;b=a;
        a=temp;
    }
    while(a%b!=0)
    {
        temp=a%b;
        a=b;
        b=temp;
    }
    return b;
}

lli lcm(lli a,lli b)
{
    return(a*b/hcf(a,b));
}

int main()
{
    int x,i,k,err;
    lli ans=1;
    while(scanf("%s",s),s[0]!='*')
    {
        ans=1;
        x=strlen(s);
        k=0;
        for(i=0;i<x;i++)
        {
            if(s[i]=='Y') ans=lcm(ans,(lli)i+1);
            else notdiv[k++]=i+1;
        }
        err=0;
        for(i=0;i<k;i++)
        {
            //printf("%d\n",notdiv[i]);
            if(ans % notdiv[i]==0) {err=1; break;}
        }
        if(err) printf("-1\n");
        else printf("%lld\n",ans);
    }
    return 0;
}
