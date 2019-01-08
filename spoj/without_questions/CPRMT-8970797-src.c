#include<stdio.h>
#include<stdlib.h>

int min(int x,int y)
{
    return (x<y?x:y);
}

int a[26],b[26];
char s[1001];

int main()
{
    int i,x,p;
    while(scanf("%s",s)!=EOF)
    {
        for(i=0;i<26;i++) {a[i]=0;b[i]=0;}
        x=strlen(s);
        for(i=0;i<x;i++)
        {
            a[(int)s[i]-97]++;
        }
        scanf("%s",s);
        x=strlen(s);
        for(i=0;i<x;i++)
        {
            b[(int)s[i]-97]++;
        }
        for(i=0;i<26;i++)
        {
            if(a[i] && b[i])
            {
                p=min(a[i],b[i]);
                while(p--) printf("%c",i+97);
            }
        }
        printf("\n");
    }
    return 0;
}
