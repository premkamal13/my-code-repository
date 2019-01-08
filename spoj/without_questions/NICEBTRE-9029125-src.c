#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int a[100010],len[10001];
char s[100010];
int main()
{
    int i,l,t,n,x,j,max;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",s);
        x=strlen(s);
        for(i=0;i<x;i++)
        {
            if(s[i]=='n') a[i]=2;
            else a[i]=0;
        }
       // for(i=0;i<x;i++) printf("%d ",a[i]);
        //printf("\n");
        i=0;
        l=max=0;
        while(i<x)
        {
            l++;
            j=i-1;
            while(j>0 && a[j]==0) j--;
            if(a[j]) a[j]--;
            if(a[i]==0)
            {
                if(l>max) max=l;
                j=i-1;
                while(j>0 && a[j]==0) j--;
                l=len[j]+1;
            }
           // printf("%d %d\n",l,i);
            i++;
            len[i]=l;
        }
        printf("%d\n",max-1);
    }
    return 0;
}
