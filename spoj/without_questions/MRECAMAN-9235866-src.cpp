#include<cstdio>
#include<cstdlib>
#include<map>
#define UL unsigned long long
using namespace std;
int a[500001];
map<int,int> m;

void precompute()
{
    int i,x,y;
    a[0]=0;
    i=1;
    while(i<500001)
    {
        x=a[i-1]-i;
        if(x>0  && !m[x]) a[i]=x;
        else a[i]=a[i-1]+i;
        m[a[i]]=1;
        i++;
    }
}

int main()
{
    int n;
    precompute();
    while(scanf("%d",&n),n!=-1)
    {
        printf("%d\n",a[n]);
    }
    return 0;
}
