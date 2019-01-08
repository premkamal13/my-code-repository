#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

char s[10001],s1[10001];

int main()
{
    int t,k,i,x,k1,p;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",s);
        x=strlen(s);
        p=1;k=0;
        for(i=0;i<x;i++)
        {
            if(s[i]=='m')
            {
                k+=(p*1000);
                p=1;
            }
            else if(s[i]=='c')
            {
                k+=(p*100);
                p=1;
            }
            else if(s[i]=='x')
            {
                k+=(p*10);
                p=1;
            }
            else if(s[i]=='i')
            {
                k+=p;
                p=1;
            }
            else
            {
                p=p*((int)s[i]-48);
            }
        }
        scanf("%s",s1);
        x=strlen(s1);
        p=1;k1=0;
        for(i=0;i<x;i++)
        {
            if(s1[i]=='m')
            {
                k1+=(p*1000);
                p=1;
            }
            else if(s1[i]=='c')
            {
                k1+=(p*100);
                p=1;
            }
            else if(s1[i]=='x')
            {
                k1+=(p*10);
                p=1;
            }
            else if(s1[i]=='i')
            {
                k1+=p;
                p=1;
            }
            else
            {
                p=p*((int)s1[i]-48);
            }
        }
        //printf("%d %d\n",k,k1);
        k=k+k1;
        k1=k;
        x=k/1000;
        if(x>1) printf("%d",x);
        if(x>0) printf("m");
        k=k%1000;
        x=k/100;
        if(x>1) printf("%d",x);
        if(x>0) printf("c");
        k=k%100;
        x=k/10;
        if(x>1) printf("%d",x);
        if(x>0) printf("x");
        k=k%10;
        x=k;
        if(x>1) printf("%d",x);
        if(x>0) printf("i");
        printf("\n");
    }
        return 0;
}
