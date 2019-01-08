#include<stdio.h>
long long F[2][2]={{1,1},{1,0}},M[2][2]={{1,1},{1,0}},n;
void pw(long long F[2][2],long long n);
long long fib(long long);
void mult(long long F[2][2],long long M[2][2]);

int main()
{
    int t;
long long s,x;
scanf("%d",&t);
while(t--)
{
scanf("%lld",&n);
if(n==1) s=3;
else if(n==2) s=8;
else
{
s=(fib(n-1)+4*n-1)%123456789;
}
printf("%lld\n",s);
}   
return 0;
}

long long fib(long long n)
{
long long F[2][2]={{1,1},{1,0}};    
if(n==0) return 0;
pw(F,n-1);
return (F[0][0]);
}

void pw(long long F[2][2], long long n)
{
  if((n==0)||(n==1)) return;
  long long M[2][2]={{1,1},{1,0}};
  pw(F,n/2);
  mult(F,F);
  if(n%2!=0) mult(F,M);
}

void mult(long long F[2][2],long long M[2][2])
{
long long x,y,z,w;
x=(F[0][0] * M[0][0])%123456789+(F[0][1] * M[1][0])%123456789;
y=(F[0][0]*M[0][1])%123456789+(F[0][1]*M[1][1])%123456789;   
z=(F[1][0]*M[0][0])%123456789+(F[1][1]*M[1][0])%123456789;
w=(F[1][0]*M[0][1])%123456789+(F[1][1]*M[1][1])%123456789;
F[0][0]=x;
F[0][1]=y;
F[1][0]=z;
F[1][1]=w;
}
