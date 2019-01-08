#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int tx[8]={-1,-1,-1,0,0,1,1,1};
int ty[8]={-1,0,1,-1,1,-1,0,1};
#define INF 1000000001
int row,col,mines;
int ms[6145][6145];
int valid(int i,int j)
{
    if(i<0 || j<0 || i>=row || j>=col) return 0;
    return 1;
}

int main()
{
    int t,tst=1,i,j,x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&row,&col,&mines);
        memset(ms,0,sizeof(ms));
        while(mines--)
        {
            scanf("%d%d",&x,&y);
            ms[x][y]=-INF;
            for(i=0;i<8;i++)
            {
                if(valid(x+tx[i],y+ty[i])) ms[x+tx[i]][y+ty[i]]++;
            }
        }
        printf("Scenario #%d:\n",tst++);
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(ms[i][j]==0) printf("-");
                else if(ms[i][j]<0) printf("*");
                else printf("%d",ms[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
