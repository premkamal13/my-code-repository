#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char s[1001];
int c,x,i,c1,caps1[1001],caps[1001];

int min(int a,int b)
{
    return a<b?a:b;
}

int main()
{
    while(scanf("%s",s)!=EOF)
    {
        x=strlen(s);
        //bg=sm=0;
        for(i=0;i<x;i++)
        {
            if(isupper(s[i]))
            {
                caps[i]=1;
            }
            else
            {
                 caps[i]=0;
            }
        }
        for(i=0;i<x;i++) caps1[i]=caps[i];
        c=0;
        for(i=1;i<x;i++)
        {
            if(caps1[i]==caps1[i-1]) {c++; caps1[i]=1-caps1[i-1];}
        }
        c1=1;
        caps[0]=1-caps[0];
        for(i=1;i<x;i++)
        {
            if(caps[i]==caps[i-1]) {c1++; caps[i]=1-caps[i-1];}
        }
        printf("%d\n",min(c,c1));
    }
    return 0;
}
