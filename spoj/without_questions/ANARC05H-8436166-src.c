#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int c,len,dp[25][250],len;
char n[25];

int count(int x,int y)
{
    int i,sum;
    if(x==len) return 1;
    if(dp[x][y]!=-1) return dp[x][y];
    dp[x][y]=0;
    sum=0;
    for(i=x;i<len;i++)
    {
        sum+=n[i]-'0';
        if(sum>=y)
        {
           dp[x][y]+=count(i+1,sum);
        }
    }
    return dp[x][y];
}

int main()
{
    int c,i,j,m;
    c=1;
    while(scanf("%s",n),n[0]!='b')
    {
        len=strlen(n);
        for(i=0;i<25;i++)
        {
            for(j=0;j<250;j++)
            {
                dp[i][j]=-1;
            }
        }
        printf("%d. %d\n",c++,count(0,0));
    }
    return 0;
}
