#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define lli long long int
#define min(x,y) x<y?x:y
lli c[2001];

int main()
{
    int t,x,n,i,v,k,lim,p=1;
    lli cnt;
    scanf("%d",&t);
    while(t--)
    {
        memset(c,0,sizeof(c));
        scanf("%d",&x);
        scanf("%d",&n);
        while(n--)
        {
            scanf("%d",&k);
            c[k]++;
        }
        cnt=0;
        lim=(x<=1000?x:1000);
        for(i=0;i<=lim;i++)
        {
            if(c[i])
            {
                //printf("%d %d\n",i,c[i]);
                v=x-i;
                //printf("%d %d\n",v,c[v]);
                if(v<1001 && c[v])
                {
                    if(v==i)
                    {
                        cnt+=c[i]*(c[i]-1);
                    }
                    else
                    {
                        cnt+=c[i]*c[v];
                    }
                }
            }
        }
        printf("%d. %lld\n",p++,cnt/2);
    }
    return 0;
}
