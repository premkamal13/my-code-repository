#include<stdio.h>
#include<stdlib.h>

int a[52];
int main()
{
    int t,ans,r,c,i,j,val;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&r,&c);
        ans=0;
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++) scanf("%d",&a[j]);
            j--;
            val=a[j];
            for(j--;j>=0;j--)
            {
                if(a[j]<=val) val=a[j]-1;
                else  val=a[j];
            }
            ans^=val;
        }
        if(ans) printf("FIRST\n");
        else printf("SECOND\n");
    }
    return 0;
}
