#include<stdio.h>

long long a[100],x;
char str[10];
int main()
{  int i,c=0;
    for(i=0;a[i-1]<100000000;i++) {a[i]=pow(2,i);
    c++;}
   while(scanf("%s",str),((str[0]!=48)||(str[1]!=48)||(str[3]!=48)))    
    {
        x=(str[0]-48)*10+(str[1]-48);
        for(i=0;i<(str[3]-48);i++) x*=10;
        for(i=c-1;i>0;i--) 
        {
          if(x<a[i]) continue;
          else break;
        } 
          x=2*(x-a[i])+1;
          printf("%lld\n",x);                         
    }
    return 0;

}
