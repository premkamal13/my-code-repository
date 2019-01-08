#include<stdio.h>

int func(int a,int b)
{
    int val=1,i;
    for(i=2;i<=a;i++)
    {
           val=(val+b-1)%i+1;
    }
    return val;
    }

int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
              scanf("%d",&n);
              printf("%d\n",func(n,n+1));
              }
    return 0;
    }
