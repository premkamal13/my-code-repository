#include<cstdio>
#include<cmath>
#include<cstdlib>
#include<iostream>
#define MOD 1000000007
long long int t,i,b,m,n,k=0,s;
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
		scanf("%lld %lld",&m,&n);
		m=fib(m+1);
		k=m+1;
		//printf("%lld\n",m);
		n=fib(n+2);
		//cout<<"n= "<<n<<"\tm= "<<m<<endl;
		//printf("%lld\n",n);
		m=(n-m +MOD)%MOD;
		printf("%lld\n",m);
	}   
	return 0;
}

long long fib(long long l)
{//printf("%lld %lld\n",k,m+1);
	long long F[2][2]={{1,1},{1,0}};    
	if(l==0) return 0;
	pw(F,l-1);
	//if(l>k) {s=(s+F[0][0])%MOD;printf("%lld\n",s);}
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
	x=((F[0][0]*M[0][0])%MOD+(F[0][1]* M[1][0])%MOD+MOD)%MOD;
	y=((F[0][0]*M[0][1])%MOD+(F[0][1]*M[1][1])%MOD+MOD)%MOD;   
	z=((F[1][0]*M[0][0])%MOD+(F[1][1]*M[1][0])%MOD+MOD)%MOD;
	w=((F[1][0]*M[0][1])%MOD+(F[1][1]*M[1][1])%MOD+MOD)%MOD;
	F[0][0]=x;
	F[0][1]=y;
	F[1][0]=z;
	F[1][1]=w;
}
