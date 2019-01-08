#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;

int a[20001];
int main()
{
    int t,i,n,k,j,s,min;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&k);
        for(i=0;i<n;i++) scanf("%d",&a[i]);
        sort(a,a+i);
        //for(i=0;i<n;i++) printf("%d ",a[i]);
        s=a[k-1]-a[0]; j=1;
        min=s;
        //printf("%d\t",s);
        for(i=k;i<n;i++)
        {
            s=a[i]-a[j];j++;
            //printf("%d\t",s);
            if(s<min) min=s;
        }
        printf("%d\n",min);
    }
    return 0;
}
