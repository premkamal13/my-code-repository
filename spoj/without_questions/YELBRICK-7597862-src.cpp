#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;
long long int gcd(long long int,long long int);
int main()
{
long long int n,t,i,j,a[3000],x,p,temp,s,max,pos;
while(scanf("%lld",&n),n!=0)
{
s=0;
for(i=0;i<3*n;i+=3){scanf("%lld %lld %lld",&a[i],&a[i+1],&a[i+2]); s=s+a[i]*a[i+1]*a[i+2];}
i-=3;
sort(a,a+i);
for(i=1;i<3*n;i++) {if(a[i]%a[0]==0) p=1;
else{p=0; break;}}
if(p==1) s=s/(a[0]*a[0]*a[0]);
else{ x=a[0];for(j=0;j<n;j++){if(x==1) break; else x=gcd(a[i],x);} s=s/(x*x*x);}
printf("%lld\n",s);
}
return 0;
}

long long int gcd(long long int x,long long int y)
{
if(x%y==0) return y;
else return gcd(y,x%y);    
}
