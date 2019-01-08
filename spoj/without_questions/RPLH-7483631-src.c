#include<math.h>
#include<stdlib.h>
#include<stdio.h>

int main()
{
double t,s,k,uth,g=9.806,f,u;
int i=0;
scanf("%lf",&t);
while(t--)
    {  i++;
       scanf("%lf %lf",&s,&u);
       if((((s*g)/u/u)<1)&&(((s*g)/u/u)<1))
       {
       f=asin((s*g)/u/u);
       k= 0.5*f*180.0/3.141592654;
       if(k>45.0) k=90-k;
       printf("Scenario #%d: %.2f\n",i,k);
       }
       else printf("Scenario #%d: -1\n",i); 
    }
return 0;
}
