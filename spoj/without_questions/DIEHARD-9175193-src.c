#include<stdio.h>
#include<stdlib.h>
int dh[1001][1001][2];
int max(int a,int b)
{
    return ((a>b)?a:b);
}

int diehard(int h,int a,int f)
{
    if(h<=0 || a<=0) return -1;
    if(dh[h][a][f]) return dh[h][a][f];
    if(f)
    {
        dh[h][a][f]=1+diehard(h+3,a+2,1-f);
    }
    else
    {
        dh[h][a][f]=1+max(diehard(h-5,a-10,1-f),diehard(h-20,a+5,1-f));
    }
    return dh[h][a][f];
}

int main()
{
    int t,h,a;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&h,&a);
        printf("%d\n",diehard(h,a,1));
    }
    return 0;
}