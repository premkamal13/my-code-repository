#include<cstdio>
#include<cstdlib>
#include<algorithm>
using namespace std;
int a[1000001];
int main()
{
    int i,j,k,n,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++) scanf("%d",&a[i]);
        sort(a,a+i);
        i=0;
        k=0;
        while(a[k]<2 && k<n-1) k++;
        if(a[k]==2 && a[k+1]==3 && k==n-2)
        {
            a[k]=3;
            a[k+1]=2;
        }
        while(i<n && a[i]==1) {printf("1 "); i++;}
        j=n-1;
        while(j>=i) {printf("%d ",a[j]); j--;}
        //if(i<=n-1) printf("%d",a[i]);
        printf("\n");
    }
    return 0;
}
