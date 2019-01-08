#include<stdio.h>

int main()
{
int n,m;
double s;
while(scanf("%d %d",&n,&m),(n)||(m))
    {
       s=m<n?0.000000:(double)(m-n+1)/(m+1);
       printf("%.6f\n",s);            
    }  
return 0;  
}
