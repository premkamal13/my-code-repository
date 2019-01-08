#include<stdio.h>
// F is the multiplier, M is the base matrix
long long F[2][2]={{2,1},{3,0}},M[2][2]={{2,1},{1,0}},n;
void pw(long long F[2][2],long long n);
long long fib(long long);
void mult(long long F[2][2],long long M[2][2]);
#define mod 1000000007
int main()
{
long long int t,i,b;
long long s,x;
scanf("%lld",&t);
while(t--)
{
s=0;
scanf("%lld",&n);
if(n==2) s=12;
else
{
//s=(12*fib(n))%mod;
s=(12*fib(n-1)+mod)%mod;
}
printf("%lld\n",s);
}   
return 0;
}

long long fib(long long n)
{
long long F[2][2]={{2,1},{3,0}};    
if(n==0) return 0;
pw(F,n-1);
long long x[2][2]={{2,1},{1,0}};
return (F[0][0]);
}

void pw(long long F[2][2], long long n)
{
  if((n==0)||(n==1)) return;
  long long M[2][2]={{2,1},{3,0}};
  pw(F,n/2);
  mult(F,F); 
  if(n%2!=0) mult(F,M);
}

void mult(long long F[2][2],long long M[2][2])
{
long long x,y,z,w;
x=((F[0][0]*M[0][0])%mod+(F[0][1]*M[1][0])%mod+mod)%mod;
y=((F[0][0]*M[0][1])%mod+(F[0][1]*M[1][1])%mod+mod)%mod;   
z=((F[1][0]*M[0][0])%mod+(F[1][1]*M[1][0])%mod+mod)%mod;
w=((F[1][0]*M[0][1])%mod+(F[1][1]*M[1][1])%mod+mod)%mod;
F[0][0]=x;
F[0][1]=y;
F[1][0]=z;
F[1][1]=w;
}