#include<stdio.h>

int main()
    {
      int l;
      double a=0.00000;
      while(scanf("%d",&l),l!=0)
      {
        a=(double)l*(double)l/6.28318;
        printf("%.2f\n",a);          
      }
     return 0;
    }
