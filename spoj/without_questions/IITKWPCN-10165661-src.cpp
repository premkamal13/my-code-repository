#include<cstdio>
#include<cstdlib>

int main()
{
    int t,b,w;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&w,&b);
        if(b&1) printf("1.000000\n");
        else printf("0.000000\n");
    }
    return 0;
}