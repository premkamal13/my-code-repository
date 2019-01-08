#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char s[200001];
int main()
{
    int x,len,i,t;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%s",s);
    x=strlen(s);
    //for(i=0;i<x;i++) s[x+i]=s[i];
    int a=0;
    int b=1;
    while(b<x)
    {
        for(len=0; len<x && s[(a+len)%x]==s[(b+len)%x];++len);
        if(s[(a+len)%x]>s[(b+len)%x])
        {
            a=b;
            b+=1;
        }
        else
        {
            b=b+len+1;
        }
    }
    printf("%d\n",a+1);
    }
    return 0;
}
