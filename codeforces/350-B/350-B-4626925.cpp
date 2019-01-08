#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<stack>
using namespace std;
int hotel[100001],a[100001],cnt[100001];

int dfs(int i)
{
    int len=1;
    int val=a[i];
    while(val>=0 && cnt[val]<=1)
    {
        len++;
        //if(cnt[val]>1) {len--;break;}
        val=a[val];
    }
    return len;
}

int main()
{
    int n,i,maxm,ans;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&hotel[i]);
        cnt[i]=0;
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        a[i]--;
        if(a[i]>=0) cnt[a[i]]++;
    }
   // for(i=0;i<5;i++) printf("%d\n",cnt[i]);
    maxm=-1;
    for(i=0;i<n;i++)
    {
        if(hotel[i])
        {
            int x=dfs(i);
            if(x>maxm){maxm=x; ans=i;}
            //printf("%d %d\n",maxm,ans+1);
        }
    }
    printf("%d\n",maxm);
    stack<int>s1;
    s1.push(ans);
    int val=a[ans];
    while(val>=0)
    {
        s1.push(val);
        if(cnt[val]>1) {s1.pop();break;}
        val=a[val];
    }
    printf("%d",s1.top()+1);
    s1.pop();
    while(!s1.empty())
    {
     printf(" %d",s1.top()+1);
     s1.pop();
    }
    printf("\n");
    return 0;
}