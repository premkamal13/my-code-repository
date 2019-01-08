#include<cstdio>
#include<queue>
#define I int
#define R return
#define P pair<I,I>
#define L(i) for(i=0;i<8;i++)
#define Q pair<P,I>
#define F first
#define S second
#define M q.push(Q(P
using namespace std;
I v[8][8],h[]={-2,-2,-1,-1,1,1,2,2},g[]={-1,1,-2,2,-2,2,-1,1};char a[2],b[2];
I l(I i,I j){if(i<0||i>=8||j<0||j>=8||v[i][j]==1)R 0;v[i][j]=1;R 1;}
I u(I i,I j,I m,I n){I k=0,t,r;queue<Q> q;M(i,j),k));v[i][j]=1;while(!q.empty()){Q x=q.front();t=x.F.F;r=x.F.S;k=x.S;if(t==m && r==n) R k;q.pop();k++;L(i)if(l(t+h[i],r+g[i])) M(t+h[i],r+g[i]),k));}R 0;}
I main(){I t,i,j;scanf("%d",&t);while(t--){L(i)L(j)v[i][j]=0;scanf("%s%s",a,b);printf("%d\n",u(a[0]-97,a[1]-49,b[0]-97,b[1]-49));}R 0;}