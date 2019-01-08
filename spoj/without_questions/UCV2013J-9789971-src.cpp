#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cctype>

int main()
{
    int n,i,cnt,sum,j,x;
    while(scanf("%d",&n),n!=0)
    {
        cnt=(n+1)>>1;
        sum=0;
        for(i=0;i<n-cnt;i++) scanf("%d",&x);
        for(;i<n;i++){scanf("%d",&x); sum+=x;}
        printf("%d\n",sum);
    }
    return 0;
}
