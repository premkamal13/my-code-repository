#include<stdio.h>

int func(int a,int b)
{
    int val=0,i;
    for(i=2;i<=a;i++)
    {
           val=(val+b)%(i);
    }
    return val+1;
}

int main()
{
    int t,n,d;
    while(scanf("%d %d",&n,&d),(n!=0&&d!=0))
              {
                    printf("%d %d %d\n",n,d,func(n,d));
              }
   return 0;
}
