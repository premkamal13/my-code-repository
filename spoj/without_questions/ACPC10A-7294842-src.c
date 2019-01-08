
#include<stdio.h>

int main()
{
int a=2, b=1,c=1, k, p;
while(1)
{
scanf("%d %d %d",&a,&b,&c);
if((a==0)&&(b==0)&&(c==0)) break;
if(2*b==(a+c)) {k=1; p=2*c-b;}
else { k=2; p=(c*(c/b));}
if(k==1) printf("AP %d\n",p);
else printf("GP %d\n",p);
}
return 0;
}
