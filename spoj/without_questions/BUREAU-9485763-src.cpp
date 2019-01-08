#include<cstdio>
#include<cstdlib>
#include<map>
using namespace std;
int valid[100001];
char s[20];
map<int,int> m;
int main()
{
    int t,i,n,x,cnt;
    scanf("%d",&t);
    while(t--)
    {
        m.clear();
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%s",s);
            if(s[0]=='c')
            {
                scanf("%d",&x);
                m[i]=x;
            }
            valid[i]=1;
        }
        cnt=0;
        for(i=n;i>=0;i--)
        {
            if(valid[i])
            {
                cnt++;
                if(m[i]) valid[m[i]]=0;
            }
        }
        printf("%d\n",cnt);
        for(i=1;i<=n;i++)
        {
            if(valid[i]) printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}
