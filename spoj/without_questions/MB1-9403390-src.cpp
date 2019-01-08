#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<vector>
#define max 1000001
#define lli long long int
using namespace std;
int sieve[max];
int primes[max],pp[200],ppp[200];

int ispalin(int x)
{
    int a=x;
    int y=0;
    while(a)
    {
        int m=a%10;
        y=y*10+m;
        a/=10;
    }
    if(y==x) return 1;
    else return 0;
}

void precompute()
{
    auto vector<bool> sieve(max,true);
    int sq=sqrt(max);
    int i,j,k,i2,m;
    for(i=3;i<=sq;i+=2)
    {
            while(sieve[i]==false)
            {
                i+=2;
            }
            j=i*(i-2);
            i2=i<<1;
            while((j=i2+j)<=max)
            {
                sieve[j]=false;
            }
    }
    primes[1]=2;
    k=2;
    for(i=3;i<=max;i+=2)
    {
        if(sieve[i]) primes[k++]=i;
    }
    //for(i=1;i<=113;i++)
    //printf("%d\n",primes[9*8*6*8*9]);
    m=1;
    for(i=1;i<=k && m<=120;i++)
    {
        if(ispalin(primes[i])) pp[m++]=primes[i];
    }
    for(i=1;i<m;i++)
    {
        int x=pp[i],l;
        int s=1;
        while(x)
        {
            l=x%10;
            if(l>0) s*=l;
            x/=10;
        }
        if(s>k) printf("err\n");
        ppp[i]=primes[s];
    }
}

int main()
{
    int t,n,i;
    precompute();
    //for(i=1;i<=113;i++) printf("%d %d\n",pp[i],ppp[i]);
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("%d %d\n",pp[n],ppp[n]);
    }
    return 0;
}
