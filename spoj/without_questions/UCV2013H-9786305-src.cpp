#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<queue>
#include<cstring>
#include<vector>
#include<map>
#define pii pair<int,int>
#define F first
#define S second
using namespace std;

int a[251][251];
int visited[251][251],row,col;
map<int,int>m;
int tx[]={-1,0,0,1};
int ty[]={0,-1,1,0};

int valid(int i,int j)
{
    if(i<0 || j<0 || i>=row || j>=col) return 0;
    if(a[i][j]==0) return 0;
    if(visited[i][j]) return 0;
    visited[i][j]=1;
    return 1;
}

int bfs(int i,int j)
{
    int cnt=0;
    queue<pii>q;
    q.push(pii(i,j));
    visited[i][j]=1;
    cnt++;
    while(!q.empty())
    {
        pii x=q.front();
        i=x.F;
        j=x.S;
        q.pop();
        for(int p=0;p<4;p++)
        {
            int m=i+tx[p],n=j+ty[p];
            if(valid(m,n)) {cnt++;q.push(pii(m,n));}
        }
    }
    return cnt;
}

int main()
{
    int i,j,maxcnt,val;
    while(scanf("%d%d",&row,&col),row!=0)
    {
        maxcnt=0;
        m.clear();
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        memset(visited,0,sizeof(visited));
        j=0;
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(a[i][j]==1 && (!visited[i][j]))
                {
                    val=bfs(i,j);
                    m[val]++;
                    maxcnt++;
                }
            }
        }
        printf("%d\n",maxcnt);
        map<int,int>::iterator it;
        for(it=m.begin();it!=m.end();it++)
        {
            int x=(*it).F;
            printf("%d %d\n",x,m[x]);
        }
    }
    return 0;
}
