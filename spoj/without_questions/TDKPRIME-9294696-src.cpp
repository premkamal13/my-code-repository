#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<vector>
#define len 88000001
using namespace std;
int primes[60000001];
void sieve()
{
    auto vector<bool> a(len,true);
    int sq=sqrt(len);
    int i,j,k,i2,m;
    for(i=3;i<=sq;i+=2)
    {
            while(a[i]==false)
            {
                i+=2;
            }
            j=i*(i-2);
            i2=i<<1;
            while((j=i2+j)<=len)
            {
                a[j]=false;
            }
    }
    primes[0]=2;
    //printf("here\n");
    m=1;
    for(i=3;i<=len;i+=2)
    {
        if(a[i]) primes[m++]=i;
    }
    //printf("%d\n",m);
}

int main()
{
    int t,n;
    sieve();
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("%d\n",primes[n-1]);
    }
    return 0;
}
