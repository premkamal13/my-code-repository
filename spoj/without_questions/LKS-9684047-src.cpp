#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
//#include<cmath>
using namespace std;
/*inline int max(int x,int y)
{
    return (x>y?x:y);
}*/

int ks[2][2000001];
int val[501],wt[501];
int main()
{
    int k,n,i,j;
    scanf("%d %d",&k,&n);
    for(i=0;i<n;i++) scanf("%d %d",&val[i],&wt[i]);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=k;j++)
        {
            //if(i==0 || j==0) ks[i&1][j]=0;
            if(wt[i-1]<j)
            {
                ks[i&1][j]=max(ks[!(i&1)][j],val[i-1]+ks[!(i&1)][j-wt[i-1]]);
            }
            else ks[i&1][j]=ks[!(i&1)][j];
        }
    }
    printf("%d\n",ks[(n&1)][k]);
    return 0;
}
