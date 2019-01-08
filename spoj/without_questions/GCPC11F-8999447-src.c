#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

char a[1011];
int cnt[100];
int main()
{
    int i,j,pos,d,err,x,max,t,p;
    scanf("%d",&t);
    gets(a);
    while(t--)
    {
        for(i=65;i<91;i++) cnt[i]=0;
        gets(a);
        x=strlen(a);
        for(i=0;i<x;i++)
        {
            cnt[(int)a[i]]++;
        }
        max=cnt[65];
        pos=65;
        //for(i=65;i<91;i++) printf("%d ",cnt[i]);
        for(i=66;i<91;i++)
        {
            //printf("ololo");
            if(cnt[i]>max){max=cnt[i];pos=i; }
        }
        err=0;
        for(i=65;i<91;i++)
        {
            if(cnt[i]==max) err++;
        }
        if(err>1) printf("NOT POSSIBLE\n");
        else
        {
        d=pos-69;
        if(d<0) printf("%d ",d+26);
        else if(d>26) printf("%d ",d-26);
        //printf("\ncnt[pos]: %d pos: %d\n",cnt[pos],pos);
        else printf("%d ",d);
        for(i=0;i<x;i++)
        {
            if(a[i]==' ') printf(" ");
            else
            {
                 p=(int)a[i]-d;
                 if(p<65) p+=26;
                 if(p>90) p-=26;
                 printf("%c",(char)p);
            }
        }
        printf("\n");
        }
    }
    return 0;
}
