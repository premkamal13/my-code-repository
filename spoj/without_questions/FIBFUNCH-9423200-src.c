#include<stdio.h>
#include<stdlib.h>
#define L long long int
#define R return
#define P printf
#define S struct mat
L M=1000000007;S{L a,b,c,d;};
S l(S x,S y){S t;t.a=(x.a*y.a+x.b*y.c)%M;t.b=(x.a*y.b+x.b*y.d)%M;t.c=(x.c*y.a+x.d*y.c)%M;t.d=(x.c*y.b+x.d*y.d)%M;R t;}
S pow1(S p,L n){S t;if(n==1) R p;t=pow1(p,n/2);t=l(t,t);if(n&1) t=l(t,p);R t;}
L f(L x,L y, L n){S p={1,1,1,0};S pown= pow1(p,n-1);L k=(((pown.a%M)*(y%M))%M+(((pown.b)%M)*(x%M)%M)-(y%M)+M)%M;R k%M;}
int main(){int t;L n,x,y;scanf("%d",&t);while(t--){scanf("%lld %lld %lld %lld",&x,&y,&n,&M);if(n==1) P("%lld\n",x%M);else if(n==2) P("%lld\n",(x+y)%M);else P("%lld\n",f(x,y,n+1)%M);}R 0;}