#include<stdio.h>
#include<stdlib.h>

int k[6][100001],a[6];

int main()
{
    int x,n,i,j;
    scanf("%d",&x);
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i>0)a[i]+=a[i-1];
    }
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=x;j++)
        {
            if(j==0) k[i][j]=1;
            else if(i==0) k[i][j]=0;
            else if(a[i-1]>j) k[i][j]|=k[i-1][j];
            else k[i][j]|=(k[i-1][j])|(k[i-1][j-a[i-1]])|(k[i][j-a[i-1]]);
        }
    }
    /*for(i=0;i<=n;i++)
    {
        for(j=0;j<=x;j++)
        {
            printf("%d ",k[i][j]);
        }
        printf("\n");
    }*/
    if(k[n][x]) printf("YES\n");
    else printf("NO\n");
    return 0;
}
