#include<stdio.h>

int main()
{
    long long int n,y,x,c=0,a[100000],i,j=0,p=0;
    scanf("%lld",&n);
    while(n!=1)
    {y=0;
     while(n!=0)
     {
     x=n%10;
     y=y+x*x;
     n=n/10;           
     } 
      for(i=0;i<j;i++){if(y==a[i]) {p=1;break;}}
      if(p==1) break;
      n=y;
      a[j++]=n;
      c++;            
    }
if(p==1) printf("-1\n");
else printf("%lld\n",c);
return 0;
}


