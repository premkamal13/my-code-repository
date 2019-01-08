#include<cstdio>
#include<algorithm>
#include<map>
#include<iostream>

using namespace std;

map <int, long long> x;

long long int max(int a,int b)
{
     if(a>b) return a;
     else return b;
}


long long int maxcoins(long long int n)
{
     if(n==0) return 0;
     long long int r=x[n];
     if(r==0)
     {
             r=max(n,maxcoins(n/2)+maxcoins(n/3)+maxcoins(n/4));
             x[n]=r;
     }
return r;
}

int main()
{
    long long int n;
    x.clear();
    while(scanf("%lld",&n)!=EOF)
    {
    printf("%lld\n",maxcoins(n));
    }
return 0;
}
