#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;

int main()
{
int m,n,t,a,b,i,j;    
scanf("%d",&t);
while(t--)
{
scanf("%d %d",&m,&n);
i=0,j=0;
a=-1;b=-1;
while(m--)
{
scanf("%d",&i);
if(i>a) a=i;
}
while(n--)
{
scanf("%d",&j);
if(j>b) b=j;
}
if(a>=b)
 printf("Godzilla\n");
else printf("MechaGodzilla\n");           
}
return 0;
}
