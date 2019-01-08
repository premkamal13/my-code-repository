#include<cstdio>
#include<queue>
#define I int
#define R return
#define pii pair<I,I>
#define piii pair<pii,I>
#define F first
#define S second
#define M q.push(piii(pii(t
using namespace std;
I v[8][8];
char a[2],b[2];
I l(I i,I j)
{if(i<0 || i>=8 || j<0 || j>=8 || v[i][j]==1) R 0;v[i][j]=1;R 1;}
I u(I i,I j,I di,I dj)
{
I k=0,t,r;
queue<piii> q;
q.push(piii(pii(i,j),k));
v[i][j]=1;
while(!q.empty())
{piii x=q.front();t=x.F.F;r=x.F.S;k=x.S;if(t==di && r==dj) R k;q.pop();
if(l(t-2,r-1)) M-2,r-1),k+1));
if(l(t-2,r+1)) M-2,r+1),k+1));
if(l(t-1,r-2)) M-1,r-2),k+1));
if(l(t-1,r+2)) M-1,r+2),k+1));
if(l(t+1,r-2)) M+1,r-2),k+1));
if(l(t+1,r+2)) M+1,r+2),k+1));
if(l(t+2,r-1)) M+2,r-1),k+1));
if(l(t+2,r+1)) M+2,r+1),k+1));
}R 0;}
I main()
{I m,n,p,q,t,i,j;
scanf("%d",&t);
while(t--)
{
for(i=0;i<8;i++)for(j=0;j<8;j++) {v[i][j]=0;}
scanf("%s %s",a,b);
m=a[0]-97;
n=a[1]-49;
p=b[0]-97;
q=b[1]-49;
printf("%d\n",u(m,n,p,q));
}R 0;}