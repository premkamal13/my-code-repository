#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cctype>

int main()
{
    int t,tst;
    double p0,p1,p,tym,r_plus_1,x;
    scanf("%d",&t);
    for(tst=1;tst<=t;tst++)
    {
        scanf("%lf %lf %lf %lf",&p0,&p1,&tym,&p);
        x=p1/p0;
        r_plus_1=pow(x,1/tym);
        tym=log(p/p0)/log(r_plus_1);
        printf("Scenario #%d: %.2lf\n",tst,tym);
    }
    return 0;
}
