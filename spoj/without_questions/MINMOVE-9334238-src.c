#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
char s[300001];
int main()
{
    int x,len,m,p,q,ans;
    gets(s);
    len=x=strlen(s);
    for(m=0;m<x;m++) s[x+m]=s[m];
    int i=0;
    int j=1;
    int k=0;
    while(i+k<2*x && j+k<2*x)
    {
        p=s[i+k];
        q=s[j+k];
        if(p==q) k++;
        else if(p>q)
        {
            i=i+k+1;
            if(i<=j) i=j+1;
            k=0;
        }
        else
        {
            j=j+k+1;
            if(j<=i) j=i+1;
            k=0;
        }
        ans=(i<j?i:j);
    }
    printf("%d\n",ans);
    return 0;
}
