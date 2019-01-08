#include<cstdio>
#include<cstdlib>
#include<cstring>

char m[2005],j[2005];

int main()
{
    int i,n,ans,t,x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %s",&n,m);
        scanf("%d %s",&i,j);
        ans=0;
        if(n&1)
        {
            x=strlen(m);
            if(m[x-1]&1)
            {
                x=strlen(j);
                y=j[x-1]-48;
                if(((y&1)&&(i&1))||((!(y&1))&&(!(i&1)))) ans=1;
            }
        }
        if(ans) printf("Possible.\n");
        else printf("Impossible.\n");
    }
    return 0;
}
