#include<stdio.h>
#include<stdlib.h>

int a[5];

int min(int l,int m)
{
    return(l<m?l:m);
}
int main()
{
    int n,m,i,x,y,v,d;
    a[0]=a[2]=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        a[x+1]++;
    }
    v=min(a[0],a[2]);
    while(m--)
    {
        scanf("%d %d",&x,&y);
        d=y-x+1;
        if(d%2!=0) printf("0\n");
        else
        {
            if((d/2)<=v) printf("1\n");
            else printf("0\n");
        }
    }
    return 0;
}