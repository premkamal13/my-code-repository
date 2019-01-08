#include<stdio.h>
#include<math.h>

int main()
{
    double t,U,V,W,u,v,w,x,y,z,X,Y,Z,a,b,c,d,vol,area,r,s,k;
    scanf("%lf",&t);
    while(t--)
    {
      scanf("%lf%lf%lf%lf%lf%lf",&W,&v,&U,&u,&V,&w);
      X=(w-U+v)*(U+v+w);
      x=(U-v+w)*(v-w+U);
      Y=(u-V+w)*(V+w+u);
      y=(V-w+u)*(w-u+V);
      Z=(v-W+u)*(W+u+v);
      z=(W-u+v)*(u-v+W);
      a=sqrt(x*Y*Z);
      b=sqrt(y*Z*X);
      c=sqrt(z*X*Y);
      d=sqrt(x*y*z);
      vol=sqrt((b+c+d-a)*(a+c+d-b)*(a+b+d-c)*(a+b+c-d))/(192.0*u*v*w);
      s=(U+v+w)/2.0;      
      k=sqrt(s*(s-U)*(s-v)*(s-w));
      s=(W+u+v)/2.0;      
      k+=sqrt(s*(s-W)*(s-u)*(s-v));
      s=(V+u+w)/2.0;      
      k+=sqrt(s*(s-V)*(s-u)*(s-w));
      s=(U+V+W)/2.0;      
      k+=sqrt(s*(s-U)*(s-V)*(s-W));         
      r=3*vol/k;
      printf("%.4f\n",r);
    }  
  return 0;
}
