#include<cstdio>
#include<cstdlib>

int a[105],b[105];

int main()
{
    int m,n,err,i,j,val,minm,maxm,bmin,ans;
    err=0;
    scanf("%d %d",&n,&m);
    int cmin,cmax=0;
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<m;i++) scanf("%d",&b[i]);
        minm=10000001;
        maxm=-1;
        for(i=0;i<n;i++)
        {
            if(a[i]<minm) minm=a[i];
            if(a[i]>maxm) maxm=a[i];
        }
        //printf("%d %d\n",minm,maxm);
        bmin=100000001;
        for(j=0;j<m;j++)
        {
            if(bmin> b[j]) bmin=b[j];
        }
        err=1;
        for(val=maxm;val<bmin;val++)
        {
            if(2*minm<=val) {err=0; ans=val;break;}
        }
    if(err) printf("-1\n");
    else printf("%d\n",ans);
    return 0;
}