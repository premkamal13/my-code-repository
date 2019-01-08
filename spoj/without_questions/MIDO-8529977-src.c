#include<stdio.h>
#include<stdlib.h>

int t,c1,c2,p1,p2,x,i,team,y,min1,sec1;
char s1[10];

int main()
{
    scanf("%d",&t);
    c1=0;
    c2=0;
    p1=p2=0;
    x=0;
    scanf("%d %s",&team,s1);
        if(team==1)
        {
            c1++;
        }
        else
        {
            c2++;
        }
        x=(int)(((s1[0]-48)*10+s1[1]-48)*60+(s1[3]-48)*10+s1[4]-48);
    for(i=1;i<t;i++)
    {
        scanf("%d %s",&team,s1);
        y=(int)(((s1[0]-48)*10+s1[1]-48)*60+(s1[3]-48)*10+s1[4]-48);
        if(c1>c2) p1+=y-x;
        else if(c1<c2) p2+=y-x;
        x=y;
        if(team==1)
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }
    y=48*60;
    if(c1>c2) p1+=y-x;
    else if(c1<c2) p2+=y-x;
    min1=p1/60;
    sec1=p1%60;
    if(min1/10==0)
    {
        if(sec1/10==0)
        {
            printf("0%d:0%d\n",min1,sec1);
        }
        else
        {
            printf("0%d:%d\n",min1,sec1);
        }
    }
    else
    {
        if(sec1/10==0)
        {
            printf("%d:0%d\n",min1,sec1);
        }
        else
        {
            printf("%d:%d\n",min1,sec1);
        }
    }
    min1=p2/60;
    sec1=p2%60;
    if(min1/10==0)
    {
        if(sec1/10==0)
        {
            printf("0%d:0%d\n",min1,sec1);
        }
        else
        {
            printf("0%d:%d\n",min1,sec1);
        }
    }
    else
    {
        if(sec1/10==0)
        {
            printf("%d:0%d\n",min1,sec1);
        }
        else
        {
            printf("%d:%d\n",min1,sec1);
        }
    }
    return 0;
}
