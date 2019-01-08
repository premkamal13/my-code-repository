#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char  a[101][101],dp[102][101],c[3];
int row,col,steps,cnt;

void init()
{
    int i,j;
    for(j=0;j<col;j++) dp[0][j]=1;
    for(i=1;i<=row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(a[i][j]=='D') dp[i][j]=1;
            else if(a[i][j]=='T') dp[i][j]=2;
            else if(a[i][j]=='S') dp[i][j]=3;
            else dp[i][j]=0;
        }
    }
}

void start()
{
    cnt=0;
}

void paint()
{
    int i,j;
    for(i=0;i<=row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",dp[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int valid(int i,int j)
{
    if(i<0 || j<0 || i>row || j>=col) return 0;
    if(dp[i][j]==3) return 0;
    if(dp[i][j]==2) {cnt++; dp[i][j]=0; return 1;}
    return 1;
}

void traverse()
{
    int i,j;
    i=j=0;
    while(steps--)
    {
        scanf("%s",c);
        switch(c[0])
        {
            case 'R':
                    if(valid(i,j+1))
                    {
                        j++;
                    }
                    break;
            case 'L':
                    if(valid(i,j-1))
                    {
                        j--;
                    }
                    break;
            case 'D':
                    if(valid(i+1,j))
                    {
                        i++;
                    }
                    break;
            default: printf("err\n");break;
        }
        while(i<row && dp[i+1][j]==0) i+=1;
    }
    printf("%d\n",cnt);
}

int main()
{
    int t,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&row,&col,&steps);
        for(i=1;i<=row;i++)
        {
            scanf("%s",a[i]);
        }
        init();
        start();
        //paint();
        traverse();
    }
    return 0;
}
