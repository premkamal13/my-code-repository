#include<stdio.h>
int main()
{
 int n,k,t,f,c,y;;
 scanf("%d",&c);
 while(c--)
    {
       scanf("%d %d %d %d",&n,&k,&t,&f);
       y=k*((f-n)/(k-1))+n;
       printf("%d\n",y);    
    }   
return 0;
}
