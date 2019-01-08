#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int chicks[101],speed[101],dist[101],limit[101];
int main()
{
    int t,no=1,k,i,j,n,b,found,test,c,p,ans;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d %d",&n,&k);
        scanf("%d %d",&b,&t);
        for(i=0;i<n;i++)  scanf("%d",&chicks[i]);
        for(i=0;i<n;i++)  scanf("%d",&speed[i]);
        for(i=0;i<n;i++)
        {
            dist[i]=b-chicks[i];
            limit[i]=speed[i]*t;
        }
        p=c=found=ans=0;
        for(i=n-1;i>=0;i--)
        {
            if(limit[i]>=dist[i]) {c++;ans+=p;}
            else p++;
            if(c==k){found=1; break;}
        }
        printf("Case #%d: ",no++);
        if(found) printf("%d\n",ans);
        else printf("IMPOSSIBLE\n");
    }
    return 0;
}
