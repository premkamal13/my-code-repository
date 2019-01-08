#include<stdio.h>

int a[1000001];

int main()
{   int i,c,m,j,k,t,b,x;
    c=1;i=1;
    j=1;
    m=1;
    while(c<1000001)
    {
                   for(k=0;k<j;k++) a[c++]=i;
                   j=a[m++];    
                    i++;
                    }
    scanf("%d",&t);
    b=1;
    while(t--)
    {
              scanf("%d",&x);
              printf("Case #%d: %d\n",b++,a[x]);
              
              }
              return 0;
    }
