#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cmath>

using namespace std;

double p;
double a[1001],p1,x;
char str[500];

int main()
{
    double min;
    int t,n,i;
    double ans;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%s %lf",str,&a[i]);
        }
        sort(a,a+i);
        //for(i=0;i<n;i++) printf("%lf,",a[i]);
        min=a[n-1]-a[0];
        for(i=1;i<n;i++)
        {
            x=360.0-a[i]+a[i-1];
            if(x<min) min=x;
        }
        ans=min*12.0;
        printf("%d\n",(int)(ceil(ans-1e-10)));
    }
    return 0;
}
