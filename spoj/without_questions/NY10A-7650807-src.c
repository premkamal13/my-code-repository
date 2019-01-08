#include<stdio.h>
#include<string.h>

int b[8];
char a[100];
void count(char,char,char);
int main()
{
    int i,n,t;
    scanf("%d",&t);
    while(t--)
    {
              scanf("%d",&n);
              scanf("%s",a);
              for(i=0;i<8;i++) b[i]=0;
              for(i=0;i<38;i++) count(a[i],a[i+1],a[i+2]);
              printf("%d ",n);
              for(i=0;i<7;i++) printf("%d ",b[i]);
              printf("%d",b[7]);
              printf("\n");
              }
    
    return 0;
    
    }
    
void count(char x,char y,char z)
{
     if(x=='H')
     {
               if(y=='H')
                 {
                         if(z=='H') b[7]++;
                         else b[6]++;
                 }
                 else
                     {
                         if(z=='H') b[5]++;
                         else b[4]++;
                     }
     }
     else
        {
          if(y=='H')
                 {
                         if(z=='H') b[3]++;
                         else b[2]++;
                 }
                 else
                     {
                         if(z=='H') b[1]++;
                         else b[0]++;
                     }
        
        
        }                                   
}
