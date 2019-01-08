#include<cstdio>
#include<cstdlib>
#include<cstring>
int a[101];
int main()
{
    int i,n,ans,cnt=0,maxm;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]) cnt++;
    }
    if(cnt==n) maxm=-1;
    else
    {
    ans=maxm=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==1) ans-=1;
        else ans+=1;
        if(ans<0) ans=0;
        if(maxm<ans) maxm=ans;
    }
    }
    printf("%d\n",maxm+cnt);
    return 0;
}