#include<stdio.h>
#include<math.h>

int main()
{
 double t,ds,x,d,y,s,n,v,e,m;
 long long int a,k,op,i,j,h;
 scanf("%lf",&t);
 while(t--)
 {
    scanf("%lf %lf %lf",&x,&y,&s);
    if(x==y)
    {      j=0;i=x;n=s/x;h=n; printf("%lld\n",h);
            while(j<n)
         {   printf("%lld ",i);j++;}
            printf("\n");}
            else
            {
    ds=(2.0*s+5.0*y+7.0*x)*(2.0*s+5.0*y+7.0*x)-48.0*(x+y)*s;
    n=((2.0*s+5.0*y+7.0*x)+sqrt(ds))/(2.0*(x+y));
    m=((2.0*s+5.0*y+7.0*x)-sqrt(ds))/(2.0*(x+y));
    if(n>0)
    {     v=modf(n,&e);
    if(v==0)
    {       d=(y-x)/(n-6.0);
   
    a=x-2.0*d;
    k=(long long int)n;
    op=a;
    printf("%lld\n",k);
    printf("%lld ",a);
    while(--k)
         {
           op+=d;
            printf("%lld ",op);
           }
      printf("\n");}}
      if(m>0)
      {
               v=modf(m,&e);
    if(v==0)
    {       d=(y-x)/(m-6.0);
   
    a=x-2.0*d;
    k=(long long int)m;
    op=a;
    printf("%lld\n",k);
    printf("%lld ",a);
    while(--k)
         {
           op+=d;
            printf("%lld ",op);
             }
      printf("\n");}}}
    
              
      
   }  
  return 0;  
}
