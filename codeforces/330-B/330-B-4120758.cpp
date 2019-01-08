#include<cstdio>
#include<cstdlib>
#include<cstring>

int visited[1001];

int main()
{
    int i,j,n,m,ans,x,y;
    scanf("%d %d",&n,&m);
    memset(visited,0,sizeof(visited));
    for(i=0;i<m;i++)
    {
        scanf("%d%d",&x,&y);
        visited[x-1]=visited[y-1]=1;
    }

    for(i=0;i<n;i++)
    {
        if(!visited[i]) {ans=i; break;}
    }
    printf("%d\n",n-1);
    for(i=0;i<n;i++)
    {
        if(i!=ans) printf("%d %d\n",i+1,ans+1);
    }
    return 0;
}