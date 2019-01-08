#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max(a,b) a>b?a:b
int dp[2][1001];
char a[1001],b[1001];

int lcs(int x,int y)
{
    int i,j,p;
    memset(dp,0,sizeof(dp));
    for(j=0;j<y;j++) dp[0][y]=0;
    for(i=1;i<=x;i++)
    {
        p=i&1;
        dp[p][0]=0;
        for(j=1;j<=y;j++)
        {
            if(a[i-1]==b[j-1]) dp[p][j]=dp[!p][j-1]+1;
            else dp[p][j]=max(dp[p][j-1],dp[!p][j]);
        }
    }
    p=x&1;
    return dp[p][y];
}

int main()
{
    int l,x,y;
    while(scanf("%s",a),a[0]!='#')
    {
        scanf("%s",b);
        x=strlen(a);
        y=strlen(b);
        l=lcs(x,y);
        //printf("(%d) ",l);
        x-=l;
        y-=l;
        printf("%d\n",x*15+y*30);
    }
    return 0;
}
