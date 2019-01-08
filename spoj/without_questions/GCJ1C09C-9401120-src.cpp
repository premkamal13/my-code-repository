#include<cstdio>
#include<cstdlib>
#include<algorithm>
#define inf 1000000001
using namespace std;

inline void read(int *h)
{
 register char c=0;
 while (c<33) c=getchar();
 *h=0;
 while (c>33)
 {
     *h=*h*10+c-'0';
     c=getchar();
 }
}
int a[105];
int dp[105][105];//amount of bribe to be given to free prisoners b/w i,j
int n,q;

int main()
{
    int i,t,p=1;
    scanf("%d",&t);
    while(t--)
    {
        //scanf("%d%d",&n,&q);
        read(&n);
        read(&q);
        a[0]=0;
        for(i=1;i<=q;i++) read(&a[i]);//scanf("%d",&a[i]);
        a[q+1]=n+1;
        sort(a,a+q+2);
        int m=q+2,i,l,j,k;
        for(i=0;i<m;i++) dp[i][i]=0;
        for(i=0;i<m-1;i++) dp[i][i+1]=0;
        for(l=3;l<=m;l++)
        {
            for(i=0;i<m-l+1;i++)
            {
                j=i+l-1;
                dp[i][j]=inf;
                for(k=i;k<=j;k++)
                {
                    int val=(a[k]-a[i]-1)+(a[j]-a[k]-1)+dp[i][k]+dp[k][j];
                    if(val<dp[i][j]) dp[i][j]=val;
                }
            }
        }
    printf("Case #%d: %d\n",p++,dp[0][m-1]);
    }
    return 0;
}
