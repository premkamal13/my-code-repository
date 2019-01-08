#include<stdio.h>

int main()
{
    int t,m,n,i,j,s,x,a[102],b[102];
    scanf("%d",&t);
    while(t--)
    {
              for(i=1;i<102;i++) a[i]=b[i]=0;
              scanf("%d %d",&m,&n);
              while(m--)
              {
                     scanf("%d %d",&x,&i);
                     a[i]+=x;
              }
              while(n--)
              {
                     scanf("%d %d",&x,&i);
                     b[i]+=x;
              } 
              s=0;
              for(i=1;i<101;i++)
              {
                   if(a[i]<b[i]) s+=b[i]-a[i];
              }
              printf("%d\n",s);
              }
    return 0;
    }