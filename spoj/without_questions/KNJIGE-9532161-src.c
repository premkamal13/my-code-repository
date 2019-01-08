#include<stdio.h>
#include<stdlib.h>
int a[300001];
int main()
{
    int i,n,cnt,f;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    cnt=1;
    for(i=n-1;i>=0;i--)
    {
        if(a[i]==n) break;
    }
    i--;
    f=n-1;
    while(i>=0)
    {
        if(a[i]==f) {cnt++;f--;}
        i--;
    }
    printf("%d\n",n-cnt);
    return 0;
}
