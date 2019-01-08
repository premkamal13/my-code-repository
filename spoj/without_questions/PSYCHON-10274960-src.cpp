#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;
int hash[10000001];
int primes[10001],a[10001],j;
void precompute()
{
    int i;
    for(i=3;i<101;i+=2)
    {
        while(a[i]) i+=2;
        for(j=i*i;j<10001;j+=2*i)
        {
            a[j]++;
        }
    }
    primes[0]=2;
    j=1;
    for(i=3;i<10001;i+=2)
    {
        if(!a[i]) primes[j++]=i;
    }
   // printf("%d %d\n",j,primes[j-1]);
}

int psycho(int n)
{
    if(hash[n]) return(hash[n]==1);
    int ev=0,od=0,m=n;
    for(int i=0;i<j;i++)
    {
        int cnt=0;
        int val=primes[i];
        if(val>n) break;
        while(!(n%val)) {cnt++; n/=val;}
        if(cnt)
        {
            if(cnt&1) od++;
            else ev++;
        }
    }
    if(n>1) od++;
    if(ev>od) {hash[m]=1; return 1;}
    else hash[m]=-1;
    return 0;
}


int main()
{
    precompute();
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        if(psycho(n)) printf("Psycho Number\n");
        else printf("Ordinary Number\n");
    }
    return 0;
}
