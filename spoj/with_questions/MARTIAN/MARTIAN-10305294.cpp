#include<cstdio>
#include<cstdlib>
int a[501][501],b[501][501],dp[502][502];
int main()
{
    int i,j,row,col;
    while(scanf("%d%d",&row,&col),row!=0)
    {
        for(i=0;i<row;i++) for(j=0;j<col;j++) scanf("%d",&a[i][j]);
        for(i=0;i<row;i++) for(j=0;j<col;j++) scanf("%d",&b[i][j]);

        int sum=0;
        for(j=0;j<col;j++)
        {
             sum+=b[0][j];
        }
        dp[0][0]=sum;
        for(j=0;j<col;j++)
        {
            sum+=(a[0][j]-b[0][j]);
            dp[0][j+1]=sum;
        }
        for(i=1;i<row;i++)
        {
            int sum=0;
            for(j=0;j<col;j++) sum+=b[i][j];
            int maxm=dp[i-1][0];
            dp[i][0]=sum+maxm;
            for(j=0;j<col;j++)
            {
                sum+=(a[i][j]-b[i][j]);
                if(maxm<dp[i-1][j+1]) maxm=dp[i-1][j+1];
                dp[i][j+1]= sum+maxm;
            }
        }
        int ans=-1;
//       printf("\ndp array\n");
       for(j=0;j<=col;j++)
        {
            if(ans<dp[row-1][j]) ans=dp[row-1][j];
        }
//        for(i=0;i<row;i++)
//        {
//            for(j=0;j<=col;j++)
//            {
//                printf("%d ",dp[i][j]);
//            }
//            printf("\n");
//        }
        printf("%d\n",ans);
   }
   return 0;
}
