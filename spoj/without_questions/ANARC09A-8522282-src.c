#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char s1[2001];

int main()
{
    int m=1,min,i,x,bal,count;
    while(scanf("%s",s1),s1[0]!='-')
    {
        x=strlen(s1);
        bal=0;
        count=0;
        for(i=0;i<x;i++)
        {
            if(s1[i]=='{')
            {
                bal+=1;
            }
            else
            {
                bal-=1;
            }
            if(bal<0)
            {
                count+=1;
                bal=1;
            }
        }
        printf("%d. %d\n",m++,count+bal/2);
    }
    return 0;
}
