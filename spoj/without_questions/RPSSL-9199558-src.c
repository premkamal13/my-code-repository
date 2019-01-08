#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>

int main()
{
    int t;
    int r1,r2,r3,r4,r5,s1,s2,s3,s4,s5,w,l,d;
    double w1,l1,d1,m,n,p,ans;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d %d %d",&r1,&r2,&r3,&r4,&r5);
        scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
        w=(r1*(s2+s4)+r2*(s3+s4)+r3*(s1+s5)+r4*(s3+s5)+r5*(s1+s2));
        d=(r1*s1+r2*s2+r3*s3+r4*s4+r5*s5);
        l=10000-w-d;
        if(w==0 ) ans=0.0;
        else
        {
            w1=((double)w)/10000.0;
            d1=((double)d)/10000.0;
            l1=((double)l)/10000.0;
            m=d1/(1.0-d1);
            n=m*m;
            p=n*m;
            ans=(w1*w1*(1.0+2.0*m+1.0*n)+2.0*w1*w1*l1*(1.0+3.0*m+3.0*n+1.0*p))*100.0;
        }
        printf("%.lf\n",ans);
    }
    return 0;
}
