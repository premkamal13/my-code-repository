#include<stdlib.h>
#include<stdio.h>
#define inf 100000001
int g[1001][1001];
int main()
{
    int i,n,m,j,node,x,y,cnt,z,tl,k;
    scanf("%d",&n);
    scanf("%d",&node);
    scanf("%d",&tl);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++) g[i][j]=inf;
        g[i][i]=0;
    }
    scanf("%d",&m);
    while(m--)
    {
        scanf("%d %d %d",&x,&y,&z);
        g[x][y]=z;
    }
    for(k=1;k<=n;k++)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(g[i][j]>g[i][k]+g[k][j])
                g[i][j]=g[i][k]+g[k][j];
            }
        }
    }
    cnt=0;
    for(i=1;i<=n;i++)
    {
        if(g[i][node]<=tl) cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}
