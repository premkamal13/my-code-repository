#include<stdio.h>
#include<stdlib.h>

int a[100001],right[400001][2],left[400001][2],maxm[400001][2],val;
//each later array has a value col and a frequency col
int max(int a,int b)
{
    return (a>b?a:b);
}
int min(int a,int b)
{
    return (a<b?a:b);
}

void initialize(int node,int b,int e)
{
    int x,val;
    if(b==e)
    {
        left[node][0]=a[b];
        left[node][1]=1;
        right[node][0]=a[b];
        right[node][1]=1;
        maxm[node][0]=a[b];
        maxm[node][1]=1;
    }
    else
    {
        initialize(2*node,b,(b+e)/2);
        initialize(2*node+1,(b+e)/2+1,e);
        //printf("till here\n");
        left[node][0]=left[2*node][0];
        right[node][0]=right[2*node+1][0];
        left[node][1]=left[2*node][1];
        right[node][1]=right[2*node+1][1];
        if(maxm[2*node][1]>maxm[2*node+1][1])
        {
            maxm[node][0]=maxm[2*node][0];
            maxm[node][1]=maxm[2*node][1];
        }
        else
        {
            maxm[node][0]=maxm[2*node+1][0];
            maxm[node][1]=maxm[2*node+1][1];
        }
        //printf("((%d %d))\n",right[2*node][0],left[2*node+1][0]);
        if(right[2*node][0]==left[2*node+1][0])
        {
            x=right[2*node][0];
            val=right[2*node][1]+left[2*node+1][1];
            if(left[2*node][0]==right[2*node][0]) left[node][1]+=left[2*node+1][1];
            if(left[2*node+1][0]==right[2*node+1][0]) right[node][1]+=right[2*node][1];
        }
        else val=-1;
        //printf("%d %d\n",maxm[node][0],maxm[node][1]);
        //printf("%d %d\n",x,val);
        if(val>maxm[node][1])
        {
            maxm[node][1]=val;
            maxm[node][0]=x;
        }
    }
    //printf("<<%d>> ",node);
    //printf("%d %d %d ",left[node][1],right[node][1],maxm[node][1]);
    //printf("(%d %d %d)\n",left[node][0],right[node][0],maxm[node][0]);
}


int query(int node,int b,int e,int i,int j)
{
    int p1,p2,val,m;
    if(b==i && e==j) return maxm[node][1];
    m=(b+e)/2;
    if(j<=m) return query(2*node,b,(b+e)/2,i,j);
    if(i>m) return query(2*node+1,(b+e)/2+1,e,i,j);
    p1= query(2*node,b,(b+e)/2,i,m);
    p2= query(2*node+1,(b+e)/2+1,e,m+1,j);
    if(a[m]==a[m+1])
    {
        val=min(right[2*node][1],m-i+1)+min(left[2*node+1][1],j-m);
        return max(val,max(p1,p2));
    }
    return max(p1,p2);
}

int main()
{
    int n,i,j,h,q;
    while(scanf("%d",&n),n!=0)
    {
        scanf("%d",&q);
        for(i=0;i<n;i++) scanf("%d",&a[i]);
        initialize(1,0,n-1);
        //printf("initialized\n");
        while(q--)
        {
            scanf("%d %d",&i,&j);
            if(i==j) printf("1\n");
            else printf("%d\n",query(1,0,n-1,i-1,j-1));
        }
    }
    return 0;
}
