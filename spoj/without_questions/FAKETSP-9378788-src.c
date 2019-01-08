#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

double a,b,x,y,ans;
int main()
{
    ans=0.000000;
    scanf("%*[^(]");
    scanf("(%lf, %lf).",&x,&y);
    scanf("%*[^(]");
    while(scanf("(%lf, %lf).",&a,&b)!=EOF)
    {
        scanf("(%lf, %lf).",&a,&b);
        ans+=sqrt((x-a)*(x-a)+(y-b)*(y-b));
        x=a;
        y=b;
        printf("The salesman has traveled a total of %.3lf kilometers.\n",ans);
        scanf("%*[^(]");
    }
    return 0;
}
