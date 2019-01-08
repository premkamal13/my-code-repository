#include<stdio.h>
#include<stdlib.h>
#define INF 1000000001
int a[100001];
int st[500001];

int min(int x,int y)
{
    return(x<y?x:y);
}

void construct(int node,int ss,int se)
{
    if(ss==se) st[node]=a[ss];
    else
    {
        int mid=(ss+se)>>1;
        construct(2*node+1,ss,mid);
        construct(2*node+2,mid+1,se);
        st[node]=min(st[2*node+1],st[2*node+2]);
    }
}

int query(int node,int ss,int se,int qs,int qe)
{
    if(qs>se || qe<ss) return INF;
    if(qs<=ss && qe>=se) return st[node];
    int mid=(ss+se)>>1;
    return(min(query(2*node+1,ss,mid,qs,qe),query(2*node+2,mid+1,se,qs,qe)));
}

int main()
{
    int t,i,n,q,qs,qe,ss,se,p=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&q);
        for(i=0;i<n;i++) scanf("%d",&a[i]);
        printf("Scenario #%d:\n",p++);
        construct(0,0,n-1);
        while(q--)
        {
            scanf("%d%d",&qs,&qe);
            printf("%d\n",query(0,0,n-1,qs-1,qe-1));
        }
    }
    return 0;
}
