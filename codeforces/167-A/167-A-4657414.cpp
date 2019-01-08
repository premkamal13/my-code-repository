#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>

using namespace std;
double a,d,x,y;
double calc()
{
    double tt=0.0000000;
    double s1=y*y/(2.000000*a);
    //printf("s=%lf\n",s1);
    if(s1<=d)
    {
        double rem=d-s1;
        tt=y/a;
        //printf("tt1= %lf\n",tt);
        tt+=rem/y;
        //printf("tt2= %lf\n",tt);
        return tt;
    }
    return (sqrt((2*d)/a));
}


int main()
{
    int n;
    scanf("%d",&n);
    scanf("%lf%lf",&a,&d);
    double val,maxm=-1.000000;
    for(int i=0;i<n;i++)
    {
        scanf("%lf%lf",&x,&y);
        val=x+calc();
        if(maxm>val) val=maxm;
        else maxm=val;
        printf("%.9lf\n",val);
    }
    return 0;
}