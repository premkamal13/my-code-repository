#include<stdio.h>
#include<stdlib.h>
int p[505],w[505],pig[10001];
int inf=20000000;
int main()
{
    int t,e,f,n,i,j,val,min;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&e,&f);
        val=f-e;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d %d",&p[i],&w[i]);
        }
        pig[0]=0;
        for(i=1;i<=val;i++)
        {
            min=inf;
            pig[i]=inf;
            for(j=1;j<=n;j++)
            {
                if(w[j]<=i)
                {
                    pig[i]=pig[i-w[j]]+p[j];
                }
                if(pig[i]<min) min=pig[i];
            }
            pig[i]=min;
        }
        /*printf("\n< ");
        for(i=1;i<=val;i++) printf("%d ",pig[i]);
        printf(" >\n");*/
        if(pig[val]<inf) printf("The minimum amount of money in the piggy-bank is %d.\n",pig[val]);
        else printf("This is impossible.\n");
    }
    return 0;
}
