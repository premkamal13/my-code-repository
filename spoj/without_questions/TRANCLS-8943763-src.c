#include<stdio.h>
//WARSHALL"S ALGORITHM
int w[101][101];


int main()
{
    int t,cnt=1,c,i,j,k,n,x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                w[i][j]=0;
            }
        }
        for(i=0;i<n;i++)
        {
            scanf("%d %d",&x,&y);
            w[x][y]=1;
        }
        c=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(w[j][i])
                {
                    for(k=0;k<n;k++)
                    {
                        if(w[i][k]) {if(!w[j][k]) {w[j][k]=1;c++;}}
                    }
                }
            }
        }
        printf("Case #%d: %d\n",cnt++,c);
    }
    return 0;
}
