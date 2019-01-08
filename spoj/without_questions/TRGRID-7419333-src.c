#include<stdio.h>

int main()
{
 int m,n,t;
 scanf("%d",&t);
 while(t--)
 {
   scanf("%d %d",&m,&n);
   if(m<=n){
            if(m%2==0) printf("L\n");
             else printf("R\n");
            }
    else if(m>n){
                  if(n%2==0) printf("U\n");
                  else printf("D\n"); 
                 }         
  } 
  return 0;
}
