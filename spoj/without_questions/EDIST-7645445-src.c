#include<stdio.h>

char a[3001],b[3001];
int dp[3001][3001];

int min(int a,int b)
{       
if(a<b) return a;
else return b;
}


int main()
{
    
    int t,x,y,i,j,min1,minm,p;
    scanf("%d",&t);
    while(t--)
    {
              scanf("%s",a);
              scanf("%s",b);
              x=strlen(a);
              y=strlen(b);
              dp[0][0]=0;
              for(i=1;i<=x;i++) dp[i][0]=i;
              for(j=1;j<=y;j++) dp[0][j]=j;
              for(i=1;i<=x;i++)
               {
                              for(j=1;j<=y;j++)
                              {
                                      p=(a[i-1]==b[j-1])?0:1;
                                      min1=min(dp[i-1][j]+1,dp[i][j-1]+1);
                                      dp[i][j]=min(min1,dp[i-1][j-1]+p);
                              }
              }
     printf("%d\n",dp[x][y]);
     }
return 0;
    }
