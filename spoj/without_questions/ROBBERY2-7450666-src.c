#include<stdio.h>
#include<math.h>
int main()
{
    long long ar[2000],br[2000],a,b,c,d,e,f,i,j,g;
    scanf("%lld",&a);
    while(a>0)
    {
        a--;
        scanf("%lld",&b);
        scanf("%lld",&c);
        d=((-1+sqrt(1+8*b))/2);
        e=d/c;
        f=d-(c*e);
        for(i=0;i<c;i++)
        {
          ar[i]=(e*(2*(i+1)+(e-1)*c))/2;
      }
    i=0;

        for(i=0;i<f;i++)
        {
            ar[i]=ar[i]+c*e+i+1;
        }
        ar[i]=ar[i]+b-(d*d+d)/2;
          for(i=0;i<c;i++)
        {
            printf("%lld ",ar[i]);
        }
        printf("\n");
    }
    return 0;
}