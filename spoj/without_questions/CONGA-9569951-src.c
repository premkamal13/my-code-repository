#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define lli long long int
lli a[1000001];
/*WA function, doesnt work
lli func(int i,int j)
{
    if(j==i) return 0;
    else if(j==i+1)return a[j]-a[i]-1;
    lli ans=0,x,y,pi=1,pj=1;
    while(i<j)
    {
        x=(a[i+1]-a[i]-1)*pi;
        y=(a[j]-a[j-1]-1)*pj;
        if(x>y) {ans+=y; j--; pj++;}
        else {ans+=x; i++; pi++;}
        //printf("i=%d j=%d pi=%lld pj=%lld ans=%lld\n",i,j,pi,pj,ans);
    }
    return ans;
}*/

lli func(int n)
{
    lli ans=0;
    int x;
    if(n==1) return 0;
    else if(n==2)return a[1]-a[0]-1;
    else
    {
        for(x=0;x<n/2;x++)
        {
            ans+=(a[n-x-1]-a[x]);
            ans-=(n-x-1)-x;
        }
    }
    return ans;
}
int main()
{
    int n,i;
    while(scanf("%d",&n),n!=0)
    {
        for(i=0;i<n;i++) scanf("%lld",&a[i]);
        printf("%lld\n",func(n));
    }
    return 0;
}
