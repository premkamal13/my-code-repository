#include<stdio.h>
#include<stdlib.h>
#include<cstring>
#include<stack>
#define lli long long int
#define pii pair<int,int>
#define piii pair<int,pii>
#define F first
#define S second
using namespace std;
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
    //if(d==9) {found=1;return;}
    //if(x<0 || x>=r || y<0 || y>=c) return 0;
    //if(visited[x][y]) return 0;
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


/*
int dfs(int i,int j)
{
    int maxm=0,d,x,y;
    stack<piii> st;
    st.push(piii(0,pii(i,j)));
    while(!st.empty())
    {
        piii node=st.top();
        st.pop();
        d=node.F;
        x=node.S.F;
        y=node.S.S;
        visited[x][y]=0;
        for(i=-1;i<=1;i++)
        {
            for(j=-1;j<=1;j++)
            {
                if(valid(d+1,x+i,y+j))
                {
                    if(found==1) return 1;
                    //printf("%d %d\n",x+i,y+j);
                    st.push(piii(d+1,pii(x+i,y+j)));
                    //printf("%d %d %c\n",x+i,y+j,a[x+i][y+i]);
                }
            }
        }
    }
    //printf("%d\n",d);
    return 0;
}*/

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
