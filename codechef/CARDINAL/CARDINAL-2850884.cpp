#include<cstdio>
#include<cstdlib>
#include<cmath>

using namespace std;
int maxm,n,a[151],hash[15],ans;

void func(int k,int cnt,int sum)
{
    //printf("%d %d %d\n",k,cnt,sum);
    if(sum>maxm)
    {
        maxm=sum;
        ans=cnt;
    }
    else if(sum==maxm)
    {
        if(cnt>ans) ans=cnt;
    }
    if(k>=n) return;
    int m=a[k],j=0,er=0,digits[15];
    while(m)
    {
        int x=m%10;
        m/=10;
        if(hash[x]) {er=1; break;}
        digits[j++]=x;
    }
    //printf("%d\n",er);
    func(k+1,cnt,sum);
    //printf("%d\n",er);
    if(!er)
    {
        for(int i=0;i<j;i++) hash[digits[i]]=1;
        func(k+1,cnt+1,sum+a[k]);
        for(int i=0;i<j;i++) hash[digits[i]]=0;
    }
}

int main()
{
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        maxm=0;
        ans=1;
        for(int i=0;i<10;i++) hash[i]=0;
        func(0,0,0);
        printf("%d\n",ans);
    }
    return 0;
}