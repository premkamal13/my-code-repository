#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<cstring>
using namespace std;

int stx[500001],sty[500001],stz[500001];
char s[100001];

void construct(int node,int ss,int se)
{
    if(ss==se)
    {
        if(s[ss]=='x') stx[node]=1;
        else if(s[ss]=='y') sty[node]=1;
        else stz[node]=1;
    }
    else
    {
        int mid=(ss+se)/2;
        construct(2*node+1,ss,mid);
        construct(2*node+2,mid+1,se);
        stx[node]=stx[2*node+1]+stx[2*node+2];
        sty[node]=sty[2*node+1]+sty[2*node+2];
        stz[node]=stz[2*node+1]+stz[2*node+2];
    }
}

int xquery(int node,int ss,int se,int qs,int qe)
{
    if(qs<=ss && qe>=se) return stx[node];
    if(qs>se || qe<ss) return 0;
    int mid=(ss+se)/2;
    return xquery(2*node+1,ss,mid,qs,qe)+xquery(2*node+2,mid+1,se,qs,qe);
}

int yquery(int node,int ss,int se,int qs,int qe)
{
    if(qs<=ss && qe>=se) return sty[node];
    if(qs>se || qe<ss) return 0;
    int mid=(ss+se)/2;
    return yquery(2*node+1,ss,mid,qs,qe)+yquery(2*node+2,mid+1,se,qs,qe);
}

int zquery(int node,int ss,int se,int qs,int qe)
{
    if(qs<=ss && qe>=se) return stz[node];
    if(qs>se || qe<ss) return 0;
    int mid=(ss+se)/2;
    return zquery(2*node+1,ss,mid,qs,qe)+zquery(2*node+2,mid+1,se,qs,qe);
}
int main()
{
    int i,nx,ny,qs,qe,k,nz,ans;
    scanf("%s",s);
    int n=strlen(s);
    construct(0,0,n-1);
    //for(i=0;i<7;i++) printf("%d %d %d\n",stx[i],sty[i],stz[i]);
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        scanf("%d %d",&qs,&qe);
        nx=xquery(0,0,n-1,qs-1,qe-1);
        ny=yquery(0,0,n-1,qs-1,qe-1);
        nz=zquery(0,0,n-1,qs-1,qe-1);
        //printf("%d %d %d\n",nx,ny,nz);
        ans=0;
        if(qe-qs<2) ans=1;
        if(nx==ny)
        {
            if(nz==nx || (nz==nx-1 ) ||(nz==nx+1)) ans=1;
        }
        else if(nx==ny-1 || nx==ny+1)
        {
            if(nz==nx || nz==ny) ans=1;
        }
        if(ans) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}