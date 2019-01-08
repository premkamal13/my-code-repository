#include<cstdio>
#include<cstdlib>
#include<map>
#include<set>
#include<algorithm>
using namespace std;
int a[100001];
map<int,int>m;
int main()
{
    int p=1,x,n,cnt,i,j,err;
    while(scanf("%d",&n)!=EOF)
    {
        m.clear();
        cnt=0;
        for(i=1;i<=n;i++) scanf("%d",&a[i]);
        for(i=1;i<=n;i++)
        {
            if(!a[i]) continue;
            if(!m[a[i]]) cnt++;
            else
            {
                err=0;
                for(j=m[a[i]]+1;j<i;j++)
                {
                    if(a[j]<a[i]) {err=1;break;}
                }
                if(err) cnt++;
            }
            m[a[i]]=i;
        }
        printf("Case %d: %d\n",p++,cnt);
    }
    return 0;
}
