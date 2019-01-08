#include<stdio.h>
int main()
{
  double s;
  int a,k;
  scanf("%d",&a);
  while(a--)
  {
  scanf("%d",&k);
  s=1.250000000000-(0.50000000000*((double)1/(k+1)+(double)(k+1)/(k+2)));                
  printf("%.11f\n",s);  
  }
 return 0;  
}
