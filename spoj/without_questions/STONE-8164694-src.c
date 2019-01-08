#include<stdio.h>
#include<stdlib.h>

double a[1000001],b[1000001];
long long int p,q;
double cx,cy,ar;
int main()
{
    int t,n,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        p=q=0;
        for(i=0;i<n;i++)
        {
          scanf("%lf %lf",&a[i],&b[i]);
        }
        ar=0.00;
        a[n]=a[0];
        b[n]=b[0];
        cx=0.0;
        cy=0.0;
        for(i=0;i<n;i++)
        {
            ar+=(double)(a[i]*b[i+1]-a[i+1]*b[i]);
        }
        ar=ar*3.0;
        for(i=0;i<n;i++)
        {
            cx+=(a[i]+a[i+1])*(a[i]*b[i+1]-a[i+1]*b[i]);
            cy+=(b[i]+b[i+1])*(a[i]*b[i+1]-a[i+1]*b[i]);
        }

        /*if(cx==0&&ar<0) cx=-1.0*cx/ar; else cx=cx/ar;
        if(cy==0&&ar<0) cy=-1.0*cy/ar; else cy=cy/ar;*/
        cx=cx/ar; cy=cy/ar; printf("%.2lf %.2lf\n",cx,cy);
    }
    return 0;
}
