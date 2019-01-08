#include<stdio.h>
#include<stdlib.h>
#define lli long long int
lli a[1000001];
int change[1000001];
int main()
{
    int i,n,cnt,maxm,flag;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    //for(i=0;i<n;i++) printf("%lld\n",a[i]);
    for(i=1;i<n;i++)
    {
        if(a[i]>a[i-1]) change[i]=1;
        else if(a[i]<a[i-1]) change[i]=-1;
        else change[i]=0;
    }
    change[0]=0;
    flag=1;
    cnt=1;
    for(i=1;i<n;i++)
    {
        if(flag && change[i]==1) {cnt++; flag=1-flag;}
        else if(!flag && change[i]==-1) {cnt++;flag=1-flag;}
    }
    maxm=cnt;
    change[0]=1;
    flag=0;
    cnt=1;
    for(i=1;i<n;i++)
    {
        if(flag && change[i]==1) { cnt++; flag=1-flag; }
        else if(!flag && change[i]==-1) { cnt++; flag=1-flag; }
    }
    //printf("%d %d\n",maxm,cnt);
    if(cnt>maxm) maxm=cnt;
    printf("%d\n",maxm);
    return 0;
}
