#include<stdio.h>

int main()
{
 long long int x, y, t,s;
 scanf("%lld",&t);
 while(t--)
           { 
            scanf("%lld %lld",&x,&y);
            if((x==y)||(x==y+2)) 
            {
                      if(x%2==0) s=x+y;
                      else s=x+y-1; 
            printf("%lld\n",s);
            }
            else printf("No Number\n");
            }
   return 0;
}
