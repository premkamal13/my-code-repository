#include<stdio.h>
#include<math.h>

int main()

{
int t,r;
double s,sqrttwo;
sqrttwo=(double)sqrt(2.00000);
scanf("%d",&t);
  while(t--)
     {
        scanf("%d",&r);
         printf("%.4f\n",(double)8*(2-sqrttwo)*r*r*r);   
     }
return 0;
}
