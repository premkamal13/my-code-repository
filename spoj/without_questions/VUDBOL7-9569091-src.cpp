#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<vector>
#include<cstring>

using namespace std;
int a[1000001],f[51],val[51];
void precompute()
{
    int i;
    f[0]=0;
    f[1]=1;
    f[2]=2;
    for(i=3;i<36;i++) f[i]=f[i-1]+f[i-2];
    //for(i=0;i<36;i++) printf("(%d)\n",f[i]);
}

int countprint(int n)
{
    int i;
    for(i=0;i<36;i++)
    {
        while(val[i]--) printf("%d ",f[i]);
    }
    printf("\n");
}


int search(int x)
{
    int i=0,val1,val2;
    while(f[i]<x)
    {
        i++;
    }
    int p1=i>0?i-1:0,p2=i;
    if(i>0) val1=x-f[i-1];
    else val1=0;
    val2=f[i]-x;
    if(val1<val2) val[p1]++;
    else val[p2]++;
}

int main()
{
    int n,i;
    precompute();
    while(scanf("%d",&n),n!=0)
    {
        memset(val,0,sizeof(val));
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            a[i]=search(a[i]);
        }
        countprint(n);
    }
    return 0;
}
