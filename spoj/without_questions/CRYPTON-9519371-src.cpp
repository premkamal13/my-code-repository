#include<stdio.h>
#include<stdlib.h>
#include<cstring>
#include<cmath>
#include<vector>
#define len 1000001
using namespace std;
int k,l;
int primes[1000001];
char s[10001];
void precompute()
{
    auto vector<bool> a(len,true);
    int i,j,i2,m;
    for(i=3;i<=1001;i+=2)
    {
        //printf("%d\n",i);
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
    k=1;
    for(i=3;i<len;i+=2)
    {
        if(a[i]==true) primes[k++]=i;
    }
    primes[k]=len+101;
   //for(i=0;i<100;i++)
    //printf("%d\n",primes[k-1]);
}

int func(int x)
{
    int i,val=0;
    for(i=0;i<l;i++)
    {
        val=(val*10+s[i]-'0')%x;
    }
    return (val==0);
}

int main()
{
    precompute();
    //printf("precomputation done\n");
    int n,i;
    while(scanf("%s %d",s,&n),n!=0)
    {
        l=strlen(s);
        for(i=0; primes[i]<n;i++)
        {
            if(func(primes[i])) break;
        }
        if(primes[i]>=n) printf("GOOD\n");
        else printf("BAD %d\n",primes[i]);
    }
    return 0;
}
