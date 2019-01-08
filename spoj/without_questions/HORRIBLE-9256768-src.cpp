#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#define lli long long int
using namespace std;
lli st[1000001],flag[1000001];

/*lli min(lli a,lli b)
{
    return (a<b?a:b);
}

lli max(lli a,lli b)
{
    return (a>b?a:b);
}*/

lli query(int node,int ss,int se,int qs,int qe)
{
    if(se<qs || ss>qe) return 0;
    lli cnt=( min(se,qe) - max(ss,qs)+1 )*flag[node];
    if(qs<=ss && qe>=se)
    {
        cnt+=st[node];
    }
    else
    {
        int mid=(ss+se)/2;
        cnt+= query(2*node+1,ss,mid,qs,qe)+query(2*node+2,mid+1,se,qs,qe);
    }
    return cnt;
}

void update(int node,int ss,int se,int qs,int qe,int v)
{
    if(se<qs || ss>qe) return;
    if(ss>=qs && se<=qe) flag[node]+=v;
    else
    {
        int mid=(ss+se)/2;
        update(2*node+1,ss,mid,qs,qe,v);
        update(2*node+2,mid+1,se,qs,qe,v);
        st[node]=st[2*node+1]+st[2*node+2];
        st[node]+=(mid-ss+1)*flag[2*node+1]+(se-mid)*flag[2*node+2];
    }
}

int main()
{
    int t,n,m,i,q,qs,qe,v;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        //construct(0,1,n);
        memset(st,0,sizeof(st));
        memset(flag,0,sizeof(flag));
        //for(i=0;i<2*n;i++) {st[i]=0; flag[i]=0;}
        while(m--)
        {
            scanf("%d",&q);
            if(q)
            {
                scanf("%d %d",&qs,&qe);
                printf("%lld\n",query(0,1,n,qs,qe));
            }
            else
            {
                scanf("%d %d %d",&qs,&qe,&v);
                update(0,1,n,qs,qe,v);
            }
            //for(i=0;i<2*n-1;i++) printf("%d  ",st[i]);printf("??\n");
            //for(i=0;i<2*n-1;i++) printf("%d  ",flag[i]);printf(")\n");
        }
    }
    return 0;
}
