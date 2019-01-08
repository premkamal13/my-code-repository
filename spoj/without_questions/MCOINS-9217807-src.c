#include<stdio.h>
#include<stdlib.h>

int dp[1000001];
gamedp(int k,int l)
{
    int i;
    dp[0]=1;
    for(i=1;i<1000001;i++)
    {
        if(dp[i-1]) dp[i]=0;
        else if((i>=k?dp[i-k]:0)) dp[i]=0;
        else if((i>=l?dp[i-l]:0)) dp[i]=0;
        else dp[i]=1;
    }
}

int main()
{
    int k,l,n,x;
    scanf("%d %d %d",&k,&l,&n);
    gamedp(k,l);
    while(n--)
    {
        scanf("%d",&x);
        printf("%c",dp[x]+65);
    }
    return 0;
}
