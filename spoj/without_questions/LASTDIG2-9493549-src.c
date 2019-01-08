#include<stdlib.h>
#include<string.h>
#define E else
char p[100001];
int main()
{unsigned long long int b,four=4,ten=10,s,r,a;int k,t;
scanf("%d",&t);
while(t--){scanf("%s %llu",p,&b);a=p[strlen(p)-1]-48;r=a%ten;
if(b==0) k=1;E if(r==0) k=0;E if(r==5) k=5;E{s=b%four;if(s==0){if(r%2==0)k=6;E k=1;}E if(s==1)k=r;E if(s==2)k=(r*r)%ten;E k=(r*r*r)%ten;}
printf("%d\n",k);}return 0;}
