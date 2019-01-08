#include<stdio.h>
#include<stdlib.h>
int lis[100001],a[100001],b[100001];
int main()
{
    int i,j,m,t,x,n;
    scanf("%d",&t);
    while(t--)
    {
        m=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&x);
            a[x]=i;
        }
        for(i=0;i<n;i++)
        {
            scanf("%d",&x);
            b[i]=a[x];
        }
        //for(i=0;i<n;i++) printf("%d ",b[i]); printf("\n");
        lis[0]=b[0];
        m=1;
        for(i=1;i<n;i++)
        {
            int x=b[i];
            if(x>lis[m-1])
            {
                lis[m++]=x;
            }
            else
            {
                for(j=m-1;j>=0;j--)
                {
                     if(x>lis[j]) break;
                }
                lis[++j]=x;
            }
        }
        //for(i=0;i<m;i++) printf("%d ",lis[i]); printf("\n");
        printf("%d\n",m);
    }
    return 0;
}
