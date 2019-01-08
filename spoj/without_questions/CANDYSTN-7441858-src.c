#include<stdio.h>

int main()
{
   int a1,a2,total,mile,m,n,t,min1,d,min2;
   scanf("%d",&t);
   while(t--)
   { min1=0;
     min2=0;
     m=0;
     n=0;
     scanf("%d %d",&total,&mile);
     scanf("%d",&a1);
     mile--;
     while(mile--)
       {
          scanf("%d",&a2);
          d=a2-a1;
          if(d>0) {m-=a2-a1;n+=(a2-a1);}
          else if(d<0) {m+=a1-a2; n-=(a1-a2);}
          else n-=1;
          if(m<min1) min1=m;
          if(n<min2) min2=n;
          a1=a2;
       }
       if(total>=(1-min1-min2)) {printf("%d\n",-min2+1);}
       else printf("-1\n");              
   }         
return 0;    
}
