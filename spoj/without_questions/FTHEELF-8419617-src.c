#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    double g,v,h,tang,d,s;
    g=9.80;
    while(scanf("%lf %lf",&v,&h))
    { if((v==-1)&&(h==-1)) return 0;
      if(v==0) d=0.0000000;
      else
          {
             s=2.0*v*v+2.0*h*g;
             tang=tan(asin(v/sqrt(s)));
             d=v*v/g/tang;
          }
      printf("%.6lf\n",d);
    }
return 0;
}
