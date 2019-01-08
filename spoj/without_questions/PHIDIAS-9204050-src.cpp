#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
int dp[601][601];
int wx[601],hx[601];

int leftspace(int w,int h)
{
    int i,val,min=w*h;
    //printf("ololo");
    if(dp[w][h]>=0) return dp[w][h];
    for(i=1;i<=h/2;i++)
    {
        val=leftspace(w,i);
        if(val<min)
        {
            val+=leftspace(w,h-i);
            if(val<min) min=val;
        }
    }
    for(i=1;i<=w/2;i++)
    {
        val=leftspace(i,h);
        if(val<min)
        {
            val+=leftspace(w-i,h);
            if(val<min) min=val;
        }
    }
    dp[w][h]=min;
    return dp[w][h];
}

int main()
{
    int t,maxw,maxh,n,i,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&maxw,&maxh);
        //int dp[maxw+1][maxh+1];
        //memset(dp,-1,sizeof(dp));
        for(i=1;i<=maxw;i++)for(j=1;j<=maxh;j++) dp[i][j]=-1;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d %d",&wx[i],&hx[i]);
            dp[wx[i]][hx[i]]=0;
        }
        int i,j;
        printf("%d\n",leftspace(maxw,maxh));
        /*for(i=0;i<=maxw;i++)
        {
            for(j=0;j<=maxh;j++)
            {
                printf("%d ",dp[i][j]);
            }
            printf("\n");
        }*/
    }
    return 0;
}
