#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int a[2002][2002];
char pat[1001];
int main()
{
    int x=1000,y=1000,c,i,len,p=1;
    while(scanf("%s",pat),pat[0]!='Q')
    {
        a[x][y]=p;
        len=strlen(pat);
        c=0;
        for(i=0;i<len;i++)
        {
            if(pat[i]=='U') y+=1;
            else if(pat[i]=='D') y-=1;
            else if(pat[i]=='R') x+=1;
            else if(pat[i]=='L') x-=1;
            if(a[x][y]==p) {c++; }
            a[x][y]=p;
        }
    printf("%d\n",c-1);
    p+=1;
    }
    return 0;
}
