#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<queue>
#define INF 2000000001
using namespace std;
int a[21][21],val,n,m,x,y;

int max(int a1,int b1)
{
    return (a1>b1?a1:b1);
}

int main()
{
    int i,j,ans;
    scanf("%d%d",&n,&m);
    scanf("%d%d",&x,&y);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    x--;
    y--;
    for(i=x+1;i<n;i++) a[i][y]=a[i-1][y]-a[i][y];
    for(j=y+1;j<m;j++) a[x][j]=a[x][j-1]-a[x][j];
    for(i=x+1;i<n;i++)
    {
        for(j=y+1;j<m;j++)
        {
            a[i][j]=max(a[i-1][j],a[i][j-1])-a[i][j];
        }
    }
    if(a[n-1][m-1]>=0) printf("Y %d\n",a[n-1][m-1]);
    else printf("N\n");
    return 0;
}
