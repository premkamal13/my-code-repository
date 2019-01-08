#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char a[11];

int main()
{
    int err,l,n,i;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",a);
        l=strlen(a)-1;
        i=0;
        err=0;
        while(i<=l)
        {
            if(a[i]!=a[l])
            {
                //printf("ololo");
                err=1;
                break;
            }
            i++;l--;
        }
        //printf("<%d>",err);
        if(err==0) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
