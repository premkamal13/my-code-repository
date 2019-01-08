#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int a[100001],p=0,m[100001];

void sol(int x,int y)
{
    int i;
    p=1;
    for(i=x;i<y;i++) printf("%d ",i);
    printf("%d\n",i);
}

int main()
{
    int n,ch,i,s,k;
    while(scanf("%d %d",&ch,&n),ch!=0 && n!=0)
    {
        p=0;
        memset(m,0,sizeof(m));
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        k=0;
        for(i=1;i<=n;i++)
        {
            k+=a[i];
            k=k%ch;
            if(k==0) {sol(1,i); break;}
            if(m[k]) {sol(m[k]+1,i); break;}
            else m[k]=i;
        }
        if(!p) printf("no sweets\n");
    }
    return 0;
}
