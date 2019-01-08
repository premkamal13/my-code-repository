#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

char str[100001];

int main()
{
    int cnt,chk,k,i,x,m=1,t;
    scanf("%d",&t);
    while(t--)
        {
            scanf("%s",str);
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
            printf("%d\n",cnt);
        }
    return 0;
}
