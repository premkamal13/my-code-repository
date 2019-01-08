#include<stdio.h>

int main()
{
long long int b,g,k=0;
while(1)
{
scanf("%lld %lld",&b,&g);
if((b==-1)&&(g==-1)) break;
else if((b==0)&&(g==0)) k=0;
else if(b==g) k=1;
else if(b==0) k=g;
else if(g==0) k=b;
else if(b>g){ k=(b/(g+1));
              if(b%(g+1)!=0) k+=1;}
else if(g>b){ k= (g/(b+1)); 
              if(g%(b+1)!=0) k+=1;}
printf("%lld\n",k);
}
return 0;
}
