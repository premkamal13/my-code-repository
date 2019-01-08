#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stack>
#define pii pair<int,int>
#define pip pair<int,pii>
#define F first
#define S second
using namespace std;
int visited[26][26],row,col,ans1[101],ans2[101],find,f;
int a[8]={-1,1,-2,2,-2,2,-1,1};
int b[8]={-2,-2,-1,-1,1,1,2,2};
stack<pii>st;
int valid(int x ,int y)
{
    if(x<0 || y<0 || x>=row || y>=col) return 0;
    if(visited[x][y]) return 0;
    return 1;
}

void printit()
{
    int c,cnt,i,j;
    c=cnt=0;
    while(c<find)
    {
        pii x=st.top();
        st.pop();
        i=x.F;
        j=x.S;
        ans1[c]=j;
        ans2[c++]=i;
    }
    for(i=c-1;i>=0;i--)
    {
        printf("%c%d",ans1[i]+65,ans2[i]+1);
    }
    printf("\n");
    //printf("exited\n");
}

void dfs(int i,int j,int d)
{
    if(d==find){ printit(); f=1; return;}
    if(f) return;
    visited[i][j]=1;
    for(int k=0;k<8;k++)
    {
        if(valid(i+a[k],j+b[k]))
        {

            st.push(pii(i+a[k],j+b[k]));
            dfs(i+a[k],j+b[k],d+1);
            if(f) return;
            st.pop();
        }
    }
    visited[i][j]=0;
}
/*
void dfs(int i,int j,int d)
{
    int k;
    stack<pip> q;
    visited[i][j]=2;
    q.push(pip(d,pii(i,j)));
    while(!q.empty())
    {
        pip x=q.top();
        q.pop();
        d=x.F;
        i=x.S.F;
        j=x.S.S;
        if(d==find) break;
        for(k=0;k<8;k++)
        {
            if(valid(i+a[k],j+b[k]))
            {
                q.push(pip(d,pii(i+a[k],j+b[k])));
            }
        }
    }
    int c,cnt;
    c=cnt=0;
    while(cnt<find)
    {
        pip x=q.top();
        q.pop();
        d=x.F;
        i=x.S.F;
        j=x.S.S;
        ans1[c++]=j;
        ans2[c++]=i;
        cnt++;
    }
    for(i=c-1;i>=0;i--)
    {
        printf("%c%d",ans1[i]+65,ans2[i]+1);
    }
    printf("\n");
}
*/
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        while(!st.empty()) st.pop();
        scanf("%d %d",&row,&col);
        memset(visited,0,sizeof(visited));
        find=row*col;
        f=0;
        st.push(pii(0,0));
        dfs(0,0,1);
        if(!f) printf("-1\n");
    }
    return 0;
}
