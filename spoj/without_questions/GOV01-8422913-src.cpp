#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<iostream>

long long int t,i,b,m,n,k=0,mod1,s;
long long F[2][2]={{1,1},{1,0}},M[2][2]={{1,1},{1,0}};
void pw(long long F[2][2],long long n);
long long fib(long long);
void mult(long long F[2][2],long long M[2][2]);
using namespace std;
int main()
{

	long long x;
	scanf("%lld",&t);
	while(t--)
	{
		s=0;
		scanf("%lld %lld",&m,&mod1);
		//printf("%lld\n",m);
		m=fib(m+4)-3;
		//cout<<m<<endl;
		//printf("%lld\n",n);
		m=(m+mod1)%mod1;
		printf("%lld\n",m);
	}
	return 0;
}

long long fib(long long l)
{//printf("%lld %lld\n",k,m+1);
	long long F[2][2]={{1,1},{1,0}};
	if(l==0) return 0;
	pw(F,l-1);
	//if(l>k) {s=(s+F[0][0])%mod1;printf("%lld\n",s);}
	return (F[0][0]);
}

void pw(long long F[2][2], long long p)
{
	if((p==0)||(p==1)) return;
	long long M[2][2]={{1,1},{1,0}};
	pw(F,p/2);
	mult(F,F);
	if(p%2!=0) mult(F,M );
}

void mult(long long F[2][2],long long M[2][2])
{
	long long x,y,z,w;
	x=((F[0][0]*M[0][0])%mod1+(F[0][1]* M[1][0])%mod1+mod1)%mod1;
	y=((F[0][0]*M[0][1])%mod1+(F[0][1]*M[1][1])%mod1+mod1)%mod1;
	z=((F[1][0]*M[0][0])%mod1+(F[1][1]*M[1][0])%mod1+mod1)%mod1;
	w=((F[1][0]*M[0][1])%mod1+(F[1][1]*M[1][1])%mod1+mod1)%mod1;
	F[0][0]=x;
	F[0][1]=y;
	F[1][0]=z;
	F[1][1]=w;
}
