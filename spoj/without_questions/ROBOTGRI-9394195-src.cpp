#include<cstdlib>
#include<cstdio>
#include<queue>
#include<algorithm>
#include<cstring>
#define pii pair<int,int>
#define F first
#define S second
#define lli long long int
using namespace std;

lli mod=2147483647;
lli dp[1051][1051];
int p[1051][1051],visited[1051][1051];
int chk=0,n;
char a[1051][1051];

int trackdp()
{
    int i,j;
    memset(p,0,sizeof(p));
    dp[0][0]=(a[0][0]=='.'?1:0);
    if(dp[0][0])p[0][0]=1;
    for(i=1;i<n;i++)
    {
        if(a[0][i]=='#') dp[0][i]=0;
        else dp[0][i]=dp[0][i-1];
        if(a[i][0]=='#') dp[i][0]=0;
        else dp[i][0]=dp[i-1][0];
        if(dp[i][0]) p[i][0]=1;
        if(dp[0][i]) p[0][i]=1;
    }
    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            if((p[i][j-1] || p[i-1][j])&&(a[i][j]=='.')) p[i][j]=1;
            if(a[i][j]=='#') dp[i][j]=0;
            else dp[i][j]=((dp[i-1][j])+(dp[i][j-1]))%mod;
        }
    }
    return (p[n-1][n-1]);
}

int valid(int i,int j)
{
    if(i<0 || j<0 || i>=n || j>=n) return 0;
    if(visited[i][j]) return 0;
    if(a[i][j]=='#') return 0;
    if(i==n-1 && j==n-1) chk=1;
     visited[i][j]=1;
    return 1;
}

void bfs(int i,int j)
{
    queue<pii> q;
    q.push(pii(i,j));
    while(!q.empty())
    {
        pii x=q.front();
        int a=x.F;
        int b=x.S;
        q.pop();
        visited[a][b]=1;
        if(a==n-1 && b==n-1) return;
        if(valid(a+1,b)) q.push(pii(a+1,b));
         if(valid(a-1,b)) q.push(pii(a-1,b));
          if(valid(a,b+1)) q.push(pii(a,b+1));
           if(valid(a,b-1)) q.push(pii(a,b-1));
    }
}

int main()
{
     //freopen("C:\\Users\\lovelotus\\Desktop\\input.txt","r",stdin);
    //freopen("C:\\Users\\lovelotus\\Desktop\\output.txt","w",stdout);
    int i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }
    int val=trackdp();
    if(val) printf("%lld\n",dp[n-1][n-1]);
    else
    {
        chk=0;
        memset(visited,0,sizeof(visited));
        bfs(0,0);
        if(visited[n-1][n-1]) printf("THE GAME IS A LIE\n");
        else printf("INCONCEIVABLE\n");
    }
    return 0;
}
