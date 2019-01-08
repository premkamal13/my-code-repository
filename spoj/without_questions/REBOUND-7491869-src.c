#include<stdio.h>
#include<math.h>

int main()
{
    double x,y,z,d,a,b,c,e,l,k;
    long long int t,s;
    scanf("%lld",&t);
    while(t--)
    {
       scanf("%lf %lf %lf",&x,&y,&z);
       a=4*z*z*x*x+4*y*z*z*(y+2*z);
       b=sqrt(a);
       l=2.0*(y+2*z);
       k=2.0*z*x-b;
       c=k/l;
       d=modf(c,&e);
       if((k<=0)||(d!=0))
       {
       k=2.0*z*x+b;
       c=k/l;
       d=modf(c,&e);
       }
       s=(long long int)c;
       if((c<=x)&&(d==0)) printf("%lld\n",s);
       else printf("Not this time.\n");
    }
return 0;
}
