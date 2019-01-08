#include<stdio.h>
#include<stdlib.h>
int a[201][201];
int main()
{
    int i,j,k,t,err,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                err=0;
                for(k=0;k<n;k++)
                {
                    if(k!=i && k!=j)
                    {
                        if(a[i][j]==a[i][k]+a[k][j])
                        {
                            err=1;
                            break;
                        }
                    }
                }
                if(!err) printf("%d %d\n",i+1,j+1);
            }
        }
        printf("\n");
    }
    return 0;
}
