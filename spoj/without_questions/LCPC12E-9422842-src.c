#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

int main()
{
    int t,p=1;
    double x1,x2,y1,y2,r1,r2,l,ds,ans,x;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf %lf",&x1,&y1);
        scanf("%lf %lf",&x2,&y2);
        scanf("%lf %lf",&r1,&l);
        r2=sqrt((l*l)/2.00000000);
        ds=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        if(r1+r2<=ds) printf("%d. No problem\n",p++);
        else
        {
            x=(ds*ds+(r1*r1-r2*r2))/(ds*2.0000000000);
            ans=2.0000000*sqrt(r1*r1-x*x);
            //printf("r1= %.3lf      r2=%.3lf\n",r1,r2);
            //printf("ds= %.3lf      x=%.3lf\n",ds,x);
            printf("%d. %.3lf\n",p++,ans);
        }
    }
    return 0;
}
