#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    long long int a[4],m;
    int j=1;
    while(scanf("%lld %lld %lld %lld",&a[0],&a[1],&a[2],&a[3])!=EOF)
    {
                      sort(a,a+4);
                      
                     m=a[3]+a[2];
                      printf("Case %d: %lld\n",j++,m);
                                        }
    return 0;
        }
