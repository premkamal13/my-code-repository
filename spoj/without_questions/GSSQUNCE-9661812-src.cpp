#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<map>
using namespace std;
map<int,int>m;
int a[100001];
int main()
{
    int i,t,n,maxm,err,x;
    scanf("%d",&t);
    while(t--)
    {
        m.clear();
        scanf("%d",&n);
        for(i=0;i<n;i++) scanf("%d",&a[i]);
        maxm=-1;
        err=0;
        if(n==1) err=1;
        else
        {
            for(i=0;i<n;i++)
            {
                if(a[i]>maxm) maxm=a[i];
            }

            for(i=0;i<n;i++)
            {
                x=++m[a[i]];
                if(x>2) {err=1; break;}
            }
        }
        if(err) printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}
