#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

char a[30001];

int main()
{
    int t,x,i,j,k,k1,i1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",a);
        x=strlen(a);
        for(i=0;i<x;i++) a[x+i]=a[i];
        k=0;

        for(i=1;i<x;i++)
        {
            if(a[k]>a[i]) k=i;
            else if(a[k]==a[i])
            {
                j=1;
                while(j<x)
                {
                    if(a[k+j]>a[i+j])
                    {
                        k=i; break;
                    }
                    else if(a[k+j]<a[i+j]) break;
                    j++;
                }
            }
        }
        printf("%d\n",k+1);
    }
   return 0;
}
