#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char a[50009];
int div1(int n)
{
    int x,i;
    x=a[0]-48;
    //printf("<%d>",x);
        for(i=1;i<n;)
        {
                x=x*10+a[i]-48;
                i++;
                x=x%252;
                //printf("<%d>",x);
        }
if(x) return 0;
else return 1;
}

int div2(int n)
{
    int y,i;
    y=a[0]-48;
        //printf("<%d>",y);
        for(i=1;i<n;)
        {
                y=y*10+a[i]-48;
                i++;
                y=y%525;
                //printf("<%d>",y);
        }
if(y) return 0;
else return 1;
}

int main()
{
    int t,n,d1,d2;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",a);
        n=strlen(a);
        d1=div1(n);
        if(d1) printf("Yes ");
        else printf("No ");
        d2=div2(n);
        if(d2) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
