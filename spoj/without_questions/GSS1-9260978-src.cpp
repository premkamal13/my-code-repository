#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
using namespace std;
#define lli long long int

struct segment_tree
{
    lli sum,leftch,rightch,maxm;
};

segment_tree st[200001],zero;
lli a[50001];

void construct(int node,int ss,int se)
{
    if(ss==se)
    {
        //printf("base case\n");
        st[node].sum=st[node].leftch=st[node].rightch=st[node].maxm=a[ss];
        return;
    }
    else
    {
        int md=(ss+se)/2;
        construct(2*node,ss,md);
        construct(2*node+1,md+1,se);
        //printf("here\n");
        st[node].sum=st[2*node].sum+st[2*node+1].sum;
        st[node].leftch=max(st[2*node].leftch,st[2*node].sum+st[2*node+1].leftch);
        st[node].rightch=max(st[2*node+1].rightch,st[2*node+1].sum+st[2*node].rightch);
        st[node].maxm=max(max(st[2*node].maxm,st[2*node+1].maxm),st[2*node].rightch+st[2*node+1].leftch);
    }
}

segment_tree query(int node,int ss,int se,int qs,int qe)
{
    /*if(ss>qe || se<qs)
    {
        //segment_tree zero;
        zero.sum=zero.leftch=zero.rightch=zero.maxm=0;
        return zero;
    }*/
    if(qs<=ss && se<=qe) return st[node];
    int md=(ss+se)/2;
    if(qe<=md)
    {
        return query(2*node,ss,md,qs,qe);
    }
    else if(qs>md)
    {
        return query(2*node+1,md+1,se,qs,qe);
    }
    else
    {
    segment_tree st1,st2,st3;
    st1=query(2*node,ss,md,qs,qe);
    st2=query(2*node+1,md+1,se,qs,qe);
    st3.sum=st1.sum+st2.sum;
    st3.leftch=max(st1.leftch,st1.sum+st2.leftch);
    st3.rightch=max(st2.rightch,st2.sum+st1.rightch);
    st3.maxm=max(max(st1.maxm,st2.maxm),st1.rightch+st2.leftch);
    return st3;
    }
}

int main()
{
    int n,i,q,qs,qe;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%lld",&a[i]);
    construct(1,0,n-1);
    //printf("done\n");
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d %d",&qs,&qe);
        printf("%lld\n",query(1,0,n-1,qs-1,qe-1).maxm);
    }
    return 0;
}
