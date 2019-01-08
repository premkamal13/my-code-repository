#include<stdio.h>
#include<stdlib.h>
//sakamoto's algorithm
int dayofweek(int d,int m,int y)
{
    int temp[]={0,3,2,5,0,3,5,1,4,6,2,4};
    y-=m<3?1:0;
    return((y+y/4-y/100+y/400+ temp[m-1]+d)%7);
}
char s[7][15]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
int main()
{
    int t,d,m,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&d,&m,&y);
        d=dayofweek(d,m,y);
        printf("%s\n",s[d]);
    }
    return 0;
}
