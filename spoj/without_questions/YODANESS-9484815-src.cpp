#include<cstdio>
#include<cstdlib>
#include<map>
#include<iostream>
#include<algorithm>
#define INF 1000000001
using namespace std;
int cnt=0;
map<string,int>m;
char s[30001][21],ref[30001][21];
int arr[30001];

void merge(int p,int q,int r)
{
    int i,j,k;
    int n1=q-p+1;
    int n2=r-q;
    int lt[n1+1],rt[n2+1];
    lt[n1]=rt[n2]=INF;
    for(i=0;i<n1;i++) lt[i]=arr[p+i];
    for(j=0;j<n2;j++) rt[j]=arr[q+1+j];
    i=j=0;
    for(k=p;k<=r;k++)
    {
        if(lt[i]<= rt[j]) arr[k]=lt[i++];
        else {arr[k]=rt[j++]; cnt+=n1-i;}
    }
}


void merge_sort(int p,int r)
{
    if(p>=r);
    else
    {
        int mid=(p+r)/2;
        merge_sort(p,mid);
        merge_sort(mid+1,r);
        merge(p,mid,r);
    }
}

int main()
{
    int t,i,j,n;
    scanf("%d",&t);
    while(t--)
    {
        m.clear();
        scanf("%d",&n);
        for(i=0;i<n;i++) scanf("%s",s[i]);
        for(i=0;i<n;i++)
        {
            scanf("%s",ref[i]);
            m[ref[i]]=i;
        }
        for(i=0;i<n;i++) arr[i]=m[s[i]];
        //for(i=0;i<n;i++) printf("(%d ",arr[i]); printf(")\n");
        cnt=0;
        merge_sort(0,n-1);
        //for(i=0;i<n;i++) printf("%d ",arr[i]); printf("\n");
        printf("%d\n",cnt);
    }
    return 0;
}
