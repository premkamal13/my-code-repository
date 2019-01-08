#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int ans,x;
char s1[501],s2[501];
void match()
{
    int i=0;
    while(i<x)
    {
        while(i<x && s1[i]==s2[i]) i++;
        if(i>=x) break;
        ans++;
        while(i<x && s1[i]!=s2[i]) i++;
    }
}

int main()
{
    while(scanf("%s%s",s1,s2),s1[0]!='*')
    {
        ans=0;
        x=strlen(s1);
        match();
        printf("%d\n",ans);
    }
    return 0;
}
