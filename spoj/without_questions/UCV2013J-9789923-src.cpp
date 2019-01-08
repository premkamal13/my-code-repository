#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cctype>

int a[1000001];
int main()
{
    int n,i,cnt,sum,j;
    while(scanf("%d",&n),n!=0)
    {
        cnt=(n+1)>>1;
        //printf("x= %d\n",x);
        sum=0;
        for(i=0;i<n;i++) scanf("%d",&a[i]);
        for(i=n-1;cnt--;i--){sum+=a[i];}
        printf("%d\n",sum);
    }
    return 0;
}
