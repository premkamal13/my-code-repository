#include<stdio.h>
#include<stdlib.h>

long long int mod;

long long int fibo(long long int l)
{
	long long F[2][2]={{1,1},{1,0}};
	if(l==0) return 0;
	pw(F,l-1);
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
	x=((F[0][0]*M[0][0])%mod+(F[0][1]* M[1][0])%mod+mod)%mod;
	y=((F[0][0]*M[0][1])%mod+(F[0][1]*M[1][1])%mod+mod)%mod;
	z=((F[1][0]*M[0][0])%mod+(F[1][1]*M[1][0])%mod+mod)%mod;
	w=((F[1][0]*M[0][1])%mod+(F[1][1]*M[1][1])%mod+mod)%mod;
	F[0][0]=x;
	F[0][1]=y;
	F[1][0]=z;
	F[1][1]=w;
}


int main()
{
    long long int pow1[25];
    long long int ans,n,m,tot;
    int t,i;
    pow1[0]=1;
    pow1[1]=2;
    for(i=2;i<21;i++) {pow1[i]=2*pow1[i-1];}
    //for(i=2;i<21;i++) {printf("%lld ",pow1[i]);}
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&m);
        mod=pow1[m];
        tot=fibo(n+1);
        printf("%lld\n",tot%mod);
    }
return 0;
}
