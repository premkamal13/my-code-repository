#include<stdio.h>

int main()
{
    long long int a[1001];
    int i,n,t,m;
    a[1]=10;//10/1;
    for(i=2;i<1001;i++)
    {
        a[i]=(a[i-1]*(i+9))/i;
    } 
    scanf("%d",&t);
    while(t--)
    {
              scanf("%d %d",&m,&n);
              printf("%d %lld\n",m,a[n]);
              }
return 0;
}
