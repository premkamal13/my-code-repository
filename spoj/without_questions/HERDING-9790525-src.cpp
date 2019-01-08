#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<queue>
char s[1001][1001];
int visited[1001][1001],value;

int fill(int i,int j)
{
    while(!visited[i][j])
    {
        visited[i][j]=value;
        if(s[i][j]=='S') i+=1;
        else if(s[i][j]=='N') i-=1;
        else if(s[i][j]=='W') j-=1;
        else j+=1;
    }
    if(visited[i][j]<value) return 0;
    return 1;
}

int main()
{
    int row,col,cnt=0,i,j;
    value=1;
    scanf("%d%d",&row,&col);
    for(i=0;i<row;i++) scanf("%s",s[i]);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(!visited[i][j])
            {
                value++;
                int x=fill(i,j);
                //printf("%d %d %d\n",i,j,x);
                cnt+=x;
            }
        }
    }
    printf("%d\n",cnt);
    return 0;
}
