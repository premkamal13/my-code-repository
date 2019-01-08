#include<stdio.h>
#include<stdlib.h>

int a[1000001],m[1000001];

void initialize(int node,int b,int e)
{
    if(b==e) m[node]=b;
    else
    {
        initialize(2*node,b,(b+e)/2);
        initialize(2*node+1,(b+e)/2+1,e);
        if(a[m[2*node]]>a[m[2*node+1]]) m[node]=m[2*node];
        else m[node]=m[2*node+1];
    }
}

int query(int node,int b,int e,int i,int j)
{
    int p1,p2;
    if(i>e || j<b) return -1;
    if(i<=b && j>=e) return m[node];
    p1=query(2*node,b,(b+e)/2,i,j);
    p2=query(2*node+1,(b+e)/2+1,e,i,j);
    if(p1==-1) return p2;
    if(p2==-1) return p1;
    if(a[p1]>a[p2]) return p1;
    else return p2;
}

int main()
{
    int i,j,n,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    initialize(1,0,n-1);//node,begin,end
   scanf("%d",&d);
   for(i=0;i<n-d;i++)
   {
       j=i+d-1;
       printf("%d ",a[query(1,0,n-1,i,j)]);
   }
   printf("%d",a[query(1,0,n-1,i,i+d-1)]);
   return 0;
}
