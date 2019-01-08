#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cmath>

int a[51][51],n;

void floyd_warshall()
{
    int i,j,k;
    for(k=0;k<n;k++)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a[i][k]+a[k][j]<a[i][j])
                {
                    a[i][j]=a[i][k]+a[k][j];
                }
            }
        }
    }
}

int main()
{
    int t,sm,i,j,r,x,tst=1,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        scanf("%d",&r);
        floyd_warshall();
        sm=0;
        while(r--)
        {
            scanf("%d %d",&x,&y);
            sm+=a[x-1][y-1];
        }
        printf("Case #%d: %d\n",tst++,sm);
    }
    return 0;
}
