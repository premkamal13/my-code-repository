#include<stdio.h>
#include<stdlib.h>
#define lli long long int
lli INF=2000000001;
lli a[100001],st[400005];
int n;

lli min(lli x,lli y)
{
    return (x<y?x:y);
}

lli max(lli x,lli y)
{
    return (x>y?x:y);
}

int minval(int i ,int j)
{
    if(i==-1) return j;
    if(j==-1) return i;
    return(a[i]<a[j]?i:j);
}

void construct(int node,int ss,int se)
{
    if(ss==se) st[node]=ss;
    else
    {
        int mid=(ss+se)>>1;
        construct(2*node+1,ss,mid);
        construct(2*node+2,mid+1,se);
        st[node]=minval(st[2*node+1],st[2*node+2]);
    }
}

int rmq(int node,int ss,int se,int qs,int qe)
{
    if(se<qs || ss>qe) return -1;
    if(qs<=ss && qe>=se) return st[node];
    int mid=(ss+se)>>1;
    return minval(rmq(2*node+1,ss,mid,qs,qe),rmq(2*node+2,mid+1,se,qs,qe));
}

lli getmaxarea(int i,int j)
{
    //printf("%d %d\n",i,j);
    if(i>j) return -1;
    if(i==j) return a[i];
    int pos=rmq(0,0,n-1,i,j);
    //printf("%d\n",pos);
    return(max(max(getmaxarea(i,pos-1),getmaxarea(pos+1,j)),(j-i+1)*(a[pos])));
}

int main()
{
    int i;
    while(scanf("%d",&n),n!=0)
    {
        for(i=0;i<n;i++) scanf("%d",&a[i]);
        construct(0,0,n-1);
        //printf("constructed\n");
        printf("%lld\n",getmaxarea(0,n-1));
    }
    return 0;
}
