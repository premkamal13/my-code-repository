#include<cstdio>
#include<cstdlib>
#include<cmath>
#define lli long long int
#include<vector>
#define len 10000001
using namespace std;

int primes[10000001];
lli mod=10007;

void precompute()
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
    j=0;
    //printf("here\n");
    int cnt=1;
    primes[0]=primes[1]=0;
    primes[2]=1;
    for(i=3;i<len; i+=2)
        {
            if(a[i])
            {
                cnt++;
            }
            primes[i]=primes[i+1]=cnt;
        }
}


lli pw1(lli a,lli b)
{
    if(b<=0) return 1;
    lli temp=(pw1(a,b/2))%mod;
    temp=(temp*temp)%mod;
    if(b&1) temp=(temp*a)%mod;
    return temp%mod;
}


int primefact(int n)
{
    int sq=sqrt(n);
    int i=2,cnt=0;
    while(i<=sq)
    {
        if(!(n%i))
        {
            while(!(n%i)) n/=i;
            cnt++;
        }
        i++;
    }
    if(n>1) cnt++;
    //printf("%d\n",cnt);
    return cnt;
}

int main()
{
    precompute();
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int x=primes[n];
        //printf("%d\n",x);
        if(n==1) printf("0\n");
        else
        {
            lli ans=(pw1(2,x-1))%mod;
            printf("%lld\n",ans%mod);
        }
    }
    return 0;
}