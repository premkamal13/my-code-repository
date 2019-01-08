#include<stdio.h>
//b is the longest consequetive sequence length, if we find longest consequetive sequence, no num   has to be inserted or del from them, rest all have to be...
// for (i=0;i<n;i++) scanf("%lld",&a[i]);
typedef long x;

int main()
{
    long i,j,n,max;
    int t;
    scanf("%d",&t);
    while (t--)
        {
                scanf("%d",&n);
                x a[n];
                x b[n];
                for (i=0;i<n;i++) scanf("%ld",&a[i]);
                for (i=0;i<n;i++)
                {
                          b[i]=1;
                          for(j=0;j<i;j++)
                          {
                          if(b[i]<=b[j]&&a[i]==(a[j]+1))
                              b[i]=b[j]+1;
                          }
                }
                max=0;
       for (i=0;i<n;i++)
        {
            if (b[i]>max)
            max = b[i];
        }
        printf("%ld\n",n-max);
        }
return 0;
}
