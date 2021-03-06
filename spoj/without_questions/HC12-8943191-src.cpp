#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<vector>
long long int mod=1000000007;
using namespace std;

long long int a[10001],x[10001],y[10001];

long long int pow1(long long int i,long long int n)
{
    long long int v;
    if(n<1 || i==1) return 1;
    else
    {
        v=pow1(i,n/2) %mod;
        v=(v*v)%mod;
        if(n%2!=0) v=(v*i)%mod;
        return v;
    }
}

void precomputex()
{
    long long int m=1;
    int i;
    x[0]=1;
    for(i=1;i<10001;i++)
    {
        m=((m%mod) * (i%mod))%mod;
        //if(m>mod) m-=mod;
        x[i]=m %mod;
    }
}

void precomputey()
{
    long long int m=1;
    int i;
    y[0]=y[1]=1;
    for(i=2;i<10001;i++)
    {
        m=pow1(x[i],mod-2) %mod;
        y[i]=m % mod;
    }
}


int main()
{
    int n,k,i,c=1,t,j,m;
    long long int s,p;
    precomputex();precomputey();
    //for(i=0;i<100;i++) printf("%d \t%d\t\n",x[i],y[i]);
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&k);
        for(i=0;i<n;i++) scanf("%lld",&a[i]);
        sort(a,a+n);
        s=0;
        m=n-1;
        p=0;
        for(j=i-1;m>=k-1;j--)
        {
            //printf("p0: %d %d\n",y[k-1],y[m-k+1]);
            p=(y[k-1]%mod * y[m-k+1]%mod)%mod;
            //printf("p1: %lld\n",p);
            p=(p%mod * x[m]%mod)%mod;
            //printf("p1: %lld\n",p);
            p=(a[j]%mod * p%mod)%mod;
            //printf("p2: %lld\n",p);
            s=(s%mod + p%mod)%mod;
            //printf("S: %lld\n",s);
            m--;
        }
        printf("Case #%d: %lld\n",c++,s%mod);
    }
    return 0;
}
