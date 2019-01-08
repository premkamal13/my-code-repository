#include<stdlib.h>
#include<stdio.h>

int s[100001];
int main()
{
    int n,m,x,y,i,j;
    scanf("%d %d",&n,&m);
    s[0]=0;
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&x,&y);
        s[i]=s[i-1]+x*y;
    }
    i=0;
    for(j=0;j<m;j++) {scanf("%d",&x); while(s[i]<x) i++; printf("%d\n",i);}
    return 0;
}