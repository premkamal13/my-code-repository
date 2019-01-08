#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
using namespace std;
int a[101];
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    sort(a,a+n);
    int temp=a[0];
    a[0]=a[n-1];
    a[n-1]=temp;
    for(i=0;i<n-1;i++) printf("%d ",a[i]);
    printf("%d\n",a[n-1]);
    return 0;
}