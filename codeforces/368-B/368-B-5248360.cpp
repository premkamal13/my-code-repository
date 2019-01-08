#include<cstdio>
#include<cstdlib>
#include<algorithm>

using namespace std;
int hash[100001],ans[100001],a[100001];
int main()
{
    int n,m,x,i;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    ans[n-1]=1;
    hash[a[n-1]]=1;
    for(i=n-2;i>=0;i--)
    {
        if(!hash[a[i]]) ans[i]=ans[i+1]+1;
        else ans[i]=ans[i+1];
        hash[a[i]]=1;
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&x);
        printf("%d\n",ans[x-1]);
    }
    return 0;
}