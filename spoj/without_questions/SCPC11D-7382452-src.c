#include<stdio.h>

int main()
{
 int a,b,c,m,n,o;
 while(scanf("%d %d %d",&a,&b,&c),(a!=0)&&(b!=0)&&(c!=0))
 {
   m=a*a;
   n=b*b;
   o=c*c;               
  if((m+n==o)||(m+o==n)||(o+n==m)) printf("right\n");
  else printf("wrong\n");
 }    
return 0;
}
