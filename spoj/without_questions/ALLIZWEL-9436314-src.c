#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char a[101][101];
int visited[101][101];
int r,c,found=0;
char ch[11]="ALLIZZWELL";
int valid(int x,int y,int d)
{
    if(x<0 || x>=r || y<0 || y>=c) return 0;
    if(visited[x][y]) return 0;
    if(a[x][y]==ch[d])
    {
        visited[x][y]=1;
        if(d==9) found=1;
        return 1;
    }
    return 0;
}

void dfs(int x,int y,int d)
{
    int i,j;
    visited[x][y]=1;
    for(i=-1;i<=1;i++)
        {
            for(j=-1;j<=1;j++)
            {
                if(valid(x+i,y+j,d+1))
                dfs(x+i,y+j,d+1);
                if(found) return;
            }
        }
    visited[x][y]=0;
}

int main()
{
    int i,j,maxm,x,cnt=1,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&r,&c);
        for(i=0;i<r;i++) scanf("%s",&a[i]);
        maxm=0;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                visited[i][j]=0;
            }
        }
        found=0;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(a[i][j]=='A')
                {
                    dfs(i,j,0);
                    if(found) break;
                }
            }
            if(found) break;
        }
        if(found) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
