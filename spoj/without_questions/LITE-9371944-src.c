#include<stdio.h>
#include<stdlib.h>
int flag[400001],st[400001];

void construct(int node,int ss,int se)
{
    if(ss==se) st[node]=0;
    else
    {
        int mid=(ss+se)/2;
        construct(2*node,ss,mid);
        construct(2*node+1,mid+1,se);
    }
    flag[node]=0;
}

int get(int node,int ss,int se)
{
    return(flag[node]?se-ss+1-st[node]:st[node]);
}

void update(int node,int ss,int se,int qs,int qe)
{
    if(ss>qe || se<qs) return;
    if(ss>=qs && se<=qe)
    {
        flag[node]^=1;
        return;
    }
    flag[2*node]^=flag[node];
    flag[2*node+1]^=flag[node];
    flag[node]=0;
    int mid=(ss+se)/2;
    update(2*node,ss,mid,qs,qe);
    update(2*node+1,mid+1,se,qs,qe);
    st[node]=get(2*node,ss,mid)+get(2*node+1,mid+1,se);
}

int query(int node,int ss,int se,int qs,int qe)
{
    if(ss>qe || se<qs) return 0;
    if(ss>=qs && se<=qe)
    {
        return get(node,ss,se);
    }
    flag[2*node]^=flag[node];
    flag[2*node+1]^=flag[node];
    flag[node]=0;
    int mid=(ss+se)/2;
    st[node]=get(2*node,ss,mid)+get(2*node+1,mid+1,se);
    return query(2*node,ss,mid,qs,qe) + query(2*node+1,mid+1,se,qs,qe);
}


int main()
{
    int n,t,q,qs,qe;
    scanf("%d%d",&n,&t);
    //construct(1,0,n-1);
    while(t--)
    {
        scanf("%d%d%d",&q,&qs,&qe);
        if(q) printf("%d\n",query(1,1,n,qs,qe));
        else update(1,1,n,qs,qe);
    }
    return 0;
}
