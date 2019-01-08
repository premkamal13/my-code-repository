#include<cstdio>
#include<cstdlib>
#include<algorithm>

using namespace std;

int a[100001],b[100001];

int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++) scanf("%d",&b[i]);
    sort(a,a+i);
    sort(b,b+i);
    i=j=0;
    int cnt=0;
    while(j<n)
    {
        if(a[i]>=b[j]) j++;
        else {cnt++; i++;j++;}
    }
    printf("%d\n",cnt);
    return 0;
}
