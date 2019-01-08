#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

char str[100001];

int main()
{
    int cnt,chk,k,i,x,m=1;
    while(scanf("%s",str)!=EOF)
    {
        x=strlen(str);
        chk=1;
        cnt=0;
        for(i=0;i<x;i++)
        {
            k=(int)str[i]-48;
            if(k==chk)
            {
                cnt++;
                chk=1-chk;
            }
        }
        printf("Game #%d: %d\n",m++,cnt);
    }
    return 0;
}
