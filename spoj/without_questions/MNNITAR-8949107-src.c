#include<stdio.h>
#include<stdlib.h>

long long int F[2][2]={{1,1},{1,0}}, M[2][2]={{1,1},{1,0}},mod=1000000006,mod1=1000000007;

long long int pow2(long long int i,long long int n)
{
    long long int v;
    if(n<1 || i==1) return 1;
    else
    {
        v=pow2(i,n/2) %mod1;
        v=(v%mod1 * v%mod1)%mod1;
        if(n%2!=0) v=(v%mod1 * i%mod1)%mod1;
        return v%mod1;
    }
}
/*
long long int pow3(long long int a,long long int n)
{
   long long res=1;
    while(n>0)
    {
        if(n%2!=0)
            res=((res%mod)*(a%mod))%mod;
        a=((a%mod)*(a%mod))%mod;
        n/=2;
    }
    return res;
}
*/

void mult(long long int F[2][2],long long int M[2][2])
{
long long x,y,z,w;
x=(F[0][0]%mod * M[0][0]%mod )%mod+( F[0][1]%mod * M[1][0]%mod +mod)%mod;
y=(F[0][0]%mod * M[0][1]%mod )%mod+( F[0][1]%mod * M[1][1]%mod +mod)%mod;
z=(F[1][0]%mod * M[0][0]%mod )%mod+( F[1][1]%mod * M[1][0]%mod +mod)%mod;
w=(F[1][0]%mod * M[0][1]%mod )%mod+( F[1][1]%mod * M[1][1]%mod +mod)%mod;
F[0][0]=x%mod;
F[0][1]=y%mod;
F[1][0]=z%mod;
F[1][1]=w%mod;
}
    /*int pdt[2][2];
    int s,i,j,k;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            s=0;
            for(k=0;k<2;k++)
            {
                s+=F[i][k]*M[k][j];
            }
            pdt[i][j]=s;
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            F[i][j]=pdt[i][j];
        }
    }*/


void pow1(long long int F[2][2],long long int n)
{
    if(n==0 || n==1) return;
    long long int M[2][2]={{1,1},{1,0}};
    pow1(F,n/2);
    mult(F,F);
    if(n&1) mult(F,M);
}

long long int fib(long long int n)
{
    if(n==0) return 0;
    long long int F[2][2]={{1,1},{1,0}};
    pow1(F,n-1);
    return F[0][0];
}


int main()
{
    int t;
    long long int fib1,val,two=2;
    long long int n;
    //printf("%lld\n",pow2(2,i));
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        fib1=fib(n)%mod1;
        //printf("%lld\n",fib1%mod);
        val=pow2(two,fib1) %mod1;
        printf("%lld\n",val%mod1);
    }
    return 0;
}
