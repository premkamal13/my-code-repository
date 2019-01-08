#include<stdio.h>

int main()
{
    int n,i=5,a,t;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d",&n);
    a=0;
                              while(n>0)
                              { 
                                       //i*=5;
                                       n=n/i;
                                       a+=n;
                                       }
                              printf("%d\n",a);
                              }
    return 0;    
    }
