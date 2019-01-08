#include<stdio.h>
#include<stdlib.h>
#define MAX 10000001
#define MIN -1*MAX

int max(int x,int y)
{
    return(x>y?x:y);
}

char a[201][201];

int dp[201][201][2],m,n;

int val(int i,int j)
{
    if(a[i][j]=='T') return 1;
    else if(a[i][j]=='0') return 0;
    else return MIN;
}

int dp_it()
{
    int i,j,maxm=0;
    memset(dp,0,sizeof(dp));
    //printf("done yet\n");
    dp[0][0][0]=val(0,0);
    if(dp[0][0][0]>maxm) maxm=dp[0][0][0];
    if(dp[0][0][0]<0) return 0;
    dp[0][0][1]=MIN;
    for(j=1;j<n;j++)
    {
        dp[0][j][0]=dp[0][j-1][0]+val(0,j);
        if(dp[0][j][0]>maxm) maxm=dp[0][j][0];
        dp[0][j][1]=MIN;
    }
    for(i=1;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            dp[i][j][0]=max(j>0?dp[i][j-1][0]:MIN,dp[i-1][j][1])+(a[i][j]=='T'?1:(a[i][j]=='0'?0:MIN));
            if(dp[i][j][0]>maxm) maxm=dp[i][j][0];
        }
        for(j=n-1;j>=0;j--)
        {
            dp[i][j][1]=max(j<n-1?dp[i][j+1][1]:MIN,dp[i-1][j][0])+(a[i][j]=='T'?1:(a[i][j]=='0'?0:MIN));
            if(dp[i][j][1]>maxm) maxm=dp[i][j][1];
        }
        //if(dp[i][j][1]>maxm) maxm=dp[i][j][1];
    }

    /*for(j=0;j<n;j++)
    {
        if(dp[i][j][0]>maxm) maxm=dp[i][j][0];
        if(dp[i][j][1]>maxm) maxm=dp[i][j][1];
    }*/
    /*for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",dp[i][j][0]);
        }
        printf("\n");
    }
    printf("--------\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",dp[i][j][1]);
        }
        printf("\n");
    }*/
    return maxm;
}

int main()
{
    int t,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&m,&n);
        for(i=0;i<m;i++)
        {
            scanf("%s",a[i]);
        }
        printf("%d\n",dp_it());
    }
    return 0;
}
