#include<stdio.h>
#include<stdlib.h>

long long int fact(long long int x)
{
    if(x==0) return 1;
    else if(x==1) return 1;
    else return x*fact(x-1);
    }



int main()
{
    long long int a,n,k,b,i,m;
    while(scanf("%lld %lld",&n,&k)!=EOF)
    {
                    m=1;
                    for(i=0;i<k;i++)
                      {        
                        scanf("%lld",&a);
                        if(n!=0) m*=fact(a);
                        }
                    n=fact(n)/m;
                    printf("%lld\n",n);
                    }
return 0;
    }
