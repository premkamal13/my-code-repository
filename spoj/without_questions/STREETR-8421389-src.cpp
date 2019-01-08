#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<iostream>
using namespace std;

int t=0;
int gcd1(int a,int b)
{
    if(a<b)
    {
        while(b%a!=0)
        {
            t=b%a;
            b=a;
            a=t;
        }
        return a;
    }
    else
    {
         while(a%b!=0)
        {
            t=a%b;
            a=b;
            b=t;
        }
        return b;
    }
}

int main()
{
    int n,x,i,j,c,ar[100001];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    sort(ar,ar+i);
    x=ar[1]-ar[0];
    for(j=2;j<i;j++) x=gcd1(x,ar[j]-ar[j-1]);
    c=0;
    //printf("<%d>",x);
    for(i=1;i<n;i++) c+=(ar[i]-ar[i-1])/x;
    printf("%d\n",c-n+1);
    return 0;
}

