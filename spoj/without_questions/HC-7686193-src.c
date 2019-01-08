#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,t,lxh,hhb;
    char a[10];
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d",&n);
    lxh=0;hhb=0;
    while(n--)
    {
              scanf("%s",a);
              if(a[0]=='l') lxh++;
              else hhb++;
              }
    if(lxh&1) printf("lxh\n");
    else printf("hhb\n");
    }
    return 0;
}
