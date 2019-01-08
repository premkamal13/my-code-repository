#include<cstdlib>
#include<cstdio>
#include<algorithm>

using namespace std;
int a[10001];
int main()
{
    int i,j,k,p,l,n,x,c;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    sort(a,a+i);
    x=a[0];
    c=p=0;
    for(i=1;i<n;i++)
    {
        if(a[i]<0) c++;
        if(c==2) break;
    }
    if(c!=2)
    {
        p=1;
    }
    printf("1 %d\n",x);

    if(p)
    {
        printf("1 %d\n",a[n-1]);
        printf("%d",n-2);
        for(i=1;i<n-1;i++) printf(" %d",a[i]);
        printf("\n");
    }
    else
    {
        printf("2 %d %d\n",a[1],a[2]);
        printf("%d",n-3);
        for(i=3;i<n;i++) printf(" %d",a[i]);
        printf("\n");
    }
    return 0;
}