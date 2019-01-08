#include<stdio.h>

int main()
{
long long int b;
int r,s,k,t,a;
scanf("%d",&t);
while(t--)
{
         scanf("%d %lld",&a,&b);
         r=a%10;
          if(b==0) k=1;
          else if(r==0) k=0;
          else if(r==5) k=5;
          else
              { 
              s=b%4;
              switch(s)
              {
              case 0: if(r%2==0) k=6;
                       else k=1;
                       break; 
              case 1: k=r; break;
              case 2: k=r*r%10; break;
              default : k=r*r*r%10; break;
              }
              }
    printf("%d\n",k);
}
return 0;
}
