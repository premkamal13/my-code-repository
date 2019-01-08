#include<cstdio>
#include<queue>
#define I int
#define R return
#define P pair<I,I>
#define L(i) for(i=0;i<8;i++)
#define Q pair<P,I>
#define F first
#define S second
#define M q.push(Q(P(t
using namespace std;
I v[8][8];char a[2],b[2];
I l(I i,I j)
{if(i<0||i>=8||j<0||j>=8||v[i][j]==1)R 0;v[i][j]=1;R 1;}
I u(I i,I j,I m,I n)
{I k=0,t,r;queue<Q> q;q.push(Q(P(i,j),k));v[i][j]=1;
while(!q.empty())
{Q x=q.front();t=x.F.F;r=x.F.S;k=x.S;if(t==m && r==n) R k;q.pop();k++;
if(l(t-2,r-1)) M-2,r-1),k));if(l(t-2,r+1)) M-2,r+1),k));if(l(t-1,r-2)) M-1,r-2),k));if(l(t-1,r+2)) M-1,r+2),k));if(l(t+1,r-2)) M+1,r-2),k));if(l(t+1,r+2)) M+1,r+2),k));if(l(t+2,r-1)) M+2,r-1),k));if(l(t+2,r+1)) M+2,r+1),k));}R 0;}
I main()
{I t,i,j;scanf("%d",&t);while(t--){L(i)L(j)v[i][j]=0;scanf("%s%s",a,b);printf("%d\n",u(a[0]-97,a[1]-49,b[0]-97,b[1]-49));}R 0;}
