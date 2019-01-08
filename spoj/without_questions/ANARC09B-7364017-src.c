#include<stdio.h>
int main()
{
  long long int a=1,b=1,s,t,k,p;
  while( scanf("%lld %lld",&a,&b),a!=0) 
  {
  
   if(a%b==0) k=a/b;
   else if(b%a==0) k=b/a;
   else {
         s=a; 
         t=b;
        while(t!=0)
        {
             p=t;
             t=s%t;
             s=p; 
        }
        k=a*b/s;
        }  
    printf("%lld\n",k);
  }   
  return 0;
  
}
