#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct pos{ double x, y; };
typedef struct pos pos;

pos p[1000001];
double cx,cy,ar,m;
int main()
{
    int t,n,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
          scanf("%lf %lf",&p[i].x,&p[i].y);
        }
        ar=0.00;
        p[n]=p[0];
        cx=0.0;
        cy=0.0;
        for(i=0;i<n;i++)
        {
            m=(double)(p[i].x * p[i+1].y-p[i+1].x*p[i].y);
            ar+=m;
            cx+=(p[i].x+p[i+1].x)*m;
            cy+=(p[i].y+p[i+1].y)*m;
        }

        /*if(cx==0&&ar<0) cx=-1.0*cx/ar; else cx=cx/ar;
        if(cy==0&&ar<0) cy=-1.0*cy/ar; else cy=cy/ar;*/
        cx=cx/(3.0*ar); cy=cy/(3.0*ar); printf("%.2lf %.2lf\n",cx,cy);
    }
    return 0;
}
