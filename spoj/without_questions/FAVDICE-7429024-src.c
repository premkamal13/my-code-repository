#include<stdio.h>

int main()
{
    int n,i, t;
    double s;
 scanf("%d",&t);
 while(t--)
 {s=0;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  s+=(double)n/i;                 
  }          
   printf("%.2f\n",s); 
 }
 return 0;    
}
