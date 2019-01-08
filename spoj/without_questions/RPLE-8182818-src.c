#include<stdio.h>

int a[10001],b[10001];

int main()
{
    int t,pq,m,n,i,j,k,er;
    scanf("%d",&t);
    pq=1;
    while(t--)
    {
        scanf("%d %d",&m,&n);
        for(i=0;i<10001;i++) {a[i]=b[i]=0;}
        for(i=1;i<=n;i++)
        {
            scanf("%d %d",&j,&k);
            a[j]=1;
            b[k]=1;
        }
        er=0;
        for(i=1;i<=m;i++)
        {
            if(a[i]&&b[i]) {er=1; break;}
        }
        if(er==1) printf("Scenario #%d: spied\n",pq);
        else printf("Scenario #%d: spying\n",pq);
        pq++;
    }
    return 0;
}
