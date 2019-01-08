#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define maxm 1024
#define lli long long int
int dp[maxm+1],m=0;
char s[20];
void saveit()
{
    int a,i,x=strlen(s),val=0;
    for(i=0;i<x;i++)
    {
        a=s[i]-48;
        val|=(1<<a);//set the bit
    }
    dp[val]++;
    //printf("%d %d\n",val,dp[val]);
}

int main()
{
    int i,j,k,n,a=33,b=23;
    memset(dp,0,sizeof(dp));
    lli x,cnt=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",s);
        saveit();
    }
    for(i=0;i<maxm;i++)
    {
        for(j=i;j<maxm;j++)
        {
            if(dp[i] && dp[j])
            {
                if(i==j) cnt+=((lli)dp[i]*(lli)(dp[i]-1))/2;// for equal nos, count will be increased by i*(i-1)/2;
                else if((i&j))
                {
                    cnt+=((lli)dp[i]*(lli)dp[j]);
                }
            }
        }
    }
    printf("%lld\n",cnt);
    return 0;
}
