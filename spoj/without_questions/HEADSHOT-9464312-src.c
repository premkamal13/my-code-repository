#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char s[101];
int main()
{
    int one=0,zero=0,x,i;
    scanf("%s",s);
    x=strlen(s);
    for(i=0;i<x-1;i++)
    {
        if(s[i]=='0')
        {
            if(s[i+1]=='1')one++;
            else zero++;
        }
    }
    if(s[x-1]=='0')
    {
        if(s[0]=='0') zero++;
        else one++;
    }
    if(one==zero || one==0) printf("EQUAL\n");
    else if(one>zero) printf("ROTATE\n");
    else printf("SHOOT\n");
    return 0;
}
