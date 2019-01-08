#include<stdio.h>
#include<stdlib.h>
//enum pos{left,center,right};
int ball[5];
char s[101],s1[101];

int check(char c)
{
    if(c=='l' && ball[0]==1) return 1;
    if(c=='c' && ball[1]==1) return 1;
    if(c=='r' && ball[2]==1) return 1;
    return 0;
}

void set(char c)
{
    if(c=='l') ball[0]=1;
    else if(c=='c') ball[1]=1;
    else ball[2]=1;
}

void reset(char c)
{
    if(c=='l') ball[0]=0;
    else if(c=='c') ball[1]=0;
    else ball[2]=0;
}

int main()
{
    int t,i;
    ball[0]=ball[1]=ball[2]=0;
    scanf("%s",s);
    switch(s[0])
    {
        case 'l': ball[0]=1;
                  break;
        case 'c': ball[1]=1;
                  break;
        case 'r': ball[2]=1;
                  break;
        default:break;
    }
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%s %s",s,s1);
        if(check(s[0])) {reset(s[0]);set(s1[0]);}
        else if(check(s1[0])) {reset(s1[0]);set(s[0]);}
    }
    if(t==10) return 0;
    else if(ball[0]) printf("left\n");
    else if(ball[1]) printf("center\n");
    else printf("right\n");
    return 0;
}
