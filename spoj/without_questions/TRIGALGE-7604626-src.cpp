#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;

double aexp(int,int,int,double);
double bexp(int,int,double);

int main(void)
{
   int a,b,c,t,i;
   double m=0;
   scanf("%d",&t);
   while(t--)
   {
      scanf("%d %d %d",&a,&b,&c);
      m=(double)c/a;
      m=m-((double)(aexp(a,b,c,m))/(bexp(a,b,m)));
      for(i=0;i<5;i++)
      {
         m=m-((aexp(a,b,c,m))/(bexp(a,b,m)));
      }
      printf("%.6lf\n",m);
   }
   return 0;
}


double aexp(int a,int b,int c,double x)
{
   double res=((a*x)+(b*sin(x)))-c;
   return res;
}

double bexp(int a,int b,double x)
{
   double res=a+(b*cos(x));
   return res;
}

