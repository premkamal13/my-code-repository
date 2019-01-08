#include<stdio.h>
#include<stdlib.h>

int row[320000],col[320000];
char s[100];

int main ()
{
    int n,k,a,b,rmax,cmax;
    scanf("%d %d",&n,&k);
    rmax=cmax=0;
    while(k--)
    {
        scanf("%s %d %d",s,&a,&b);
        if(s[0]=='R')
        {
            row[a]+=b;
            if(row[a]>rmax) rmax=row[a];
        }
        else if(s[0]=='C')
        {
            col[a]+=b;
            if(col[a]>cmax) cmax=col[a];
        }
    }
    printf("%d\n",cmax+rmax);
    return 0;
}