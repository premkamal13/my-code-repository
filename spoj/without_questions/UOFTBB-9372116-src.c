#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define lli long long int
lli a[1001];
int main()
{
    int i,t,n,c,r,towers,b;
    lli ans,p,d;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&towers);
        memset(a,0,sizeof(a));
        while(towers--)
        {
            scanf("%d %d %lld",&c,&r,&d);
            for(i=c-r;i<=c+r;i++)
            {
                if(i>0 && i<=n) a[i]+=d;
            }
        }
        scanf("%d",&b);
        while(b--)
        {
            ans=n+1;
            scanf("%lld",&p);
            for(i=1;i<=n;i++)
            {
                p-=a[i];
                if(p<=0) {ans=i;break;}
            }
            if(ans==n+1) printf("Bloon leakage\n");
            else printf("%lld\n",ans);
        }
    }
    return 0;
}
