#include<stdio.h>
#include<stdlib.h>

int a[301];

int main()
{
    int t,err,i,x,y,st;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&st);
        for(i=1;i<301;i++) a[i]=0;
        while(scanf("%d %d",&x,&y),x!=-1)
        {
            a[x]++; a[y]++;
        }
        err=0;
        for(i=1;i<301;i++)
        {
            if(a[i]%2!=0)
            {
                err=1; break;
            }
        }
        if(err) printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}
