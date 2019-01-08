#include<cstdio>
#include<cstdlib>
#include<cstring>
#define max(a,b) (a>b?a:b)
int hash[15];
int main()
{
    int t,i,n,cnt,ans,f;
    scanf("%d",&t);
    while(t--)
    {
        for(i=0;i<10;i++)
        {
            scanf("%d",&hash[i]);
        }
        int x=hash[0];
        int minm=hash[1],pos=1;
        for(i=2;i<10;i++)
        {
            if(minm>hash[i])
            {
                pos=i;
                minm=hash[i];
            }
        }

        if(minm>x)
        {
            printf("1");
            while(minm--) printf("0");
        }
        else
        {
            printf("%d",pos);
            while(minm--) printf("%d",pos);
        }
        printf("\n");
    }
    return 0;
}