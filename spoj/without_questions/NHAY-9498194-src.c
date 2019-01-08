#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char hay[1000001],needle[1000001];
int n,m;
int lps[1000001];

void calclps()
{
    lps[0]=0;
    int i,j;
    i=1;j=0;
    while(i<m)
    {
        if(needle[i]==needle[j])
        {
            j++;
            lps[i]=j;
            i++;
        }
        else
        {
            if(!j)
            {
                lps[i]=0; i++;
            }
            else j=lps[j-1];
        }
    }
}

void calc()
{
    calclps();
    int i,j;
    //for(i=0;i<m;i++) printf("%d ",lps[i]);
    i=j=0;
    //printf("%d %d\n",m,n);
    while(i<n)
    {
        //printf("(%d %d)\n",i,j);
        if(needle[j]==hay[i])
        {
            i++;
            j++;
        }
        if(j==m)
        {
            printf("%d\n",i-j);
            j=lps[j-1];
        }
        else if(needle[j]!=hay[i])
        {
            if(j==0) i+=1;
            else j=lps[j-1];
        }
    }
}


int main()
{
    while(scanf("%d",&m)!=EOF)
    {
        scanf("%s%s",needle,hay);
        n=strlen(hay);
        calc();
    }
    return 0;
}
