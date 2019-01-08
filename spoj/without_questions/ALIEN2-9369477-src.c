#include<stdio.h>
#include<stdlib.h>

int min(int x,int y)
{
    return(x<y?x:y);
}
int a[10001],b[10001],dp1[10001],dp2[10001];
int main()
{
    int n,t,i,n1,n2,np1,np2,pos,ans;
    scanf("%d %d",&n,&t);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++) scanf("%d",&b[i]);
    dp1[0]=a[0];
    dp2[0]=b[0];
    n1=n2=0;
    np1=np2=0;
    if(dp1[0]<=t) {n1=1;np1=dp1[0];}
    if(dp2[0]<=t) {n2=1;np2=dp2[0];}
    for(i=1;i<n;i++)
    {
        dp1[i]=min(dp1[i-1],dp2[i-1]+b[i])+a[i];
        dp2[i]=min(dp2[i-1],dp1[i-1]+a[i])+b[i];
        if(dp1[i]<=t){n1=i+1; np1=dp1[i];}
        if(dp2[i]<=t){n2=i+1; np2=dp2[i];}
    }
    if(n1==n2) {pos=n1; ans=min(np1,np2);}
    else if(n1>n2) {pos=n1; ans=np1;}
    else {pos=n2; ans=np2;}
    printf("%d %d\n",pos,ans);
    return 0;
}
