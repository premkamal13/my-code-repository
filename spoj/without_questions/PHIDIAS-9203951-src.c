#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int dp[601][601];
int wx[601],hx[601];

void init(int n,int mw,int mh)
{
    int i;
    memset(dp,-1,sizeof(dp));
    for(i=0;i<n;i++)
    {
        dp[wx[i]][hx[i]]=0;
    }
    for(i=0;i<=mw;i++) dp[i][0]=0;
    for(i=0;i<=mh;i++) dp[0][i]=0;
    //printf("ololo");
}

int leftspace(int w,int h)
{
    int i,val,min=w*h;
    //printf("ololo");
    if(dp[w][h]>=0) return dp[w][h];
    for(i=1;i<=h/2;i++)
    {
        //val=(h/i)*leftspace(w,i);
        //if((h%i) && val<min) val+=leftspace(w,h%i);
        val=leftspace(w,i);
        if(val<min)
        {
            val+=leftspace(w,h-i);
            if(val<min) min=val;
        }
    }
    for(i=1;i<=w/2;i++)
    {
        //val=(w/i)*leftspace(i,h);
        //if((w%i) && val<min) val+=leftspace(w%i,h);
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
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d %d",&wx[i],&hx[i]);
        }
        init(n,maxw,maxh);
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
