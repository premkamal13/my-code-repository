#include<stdio.h>
#include<stdlib.h>
#include<cstring>
#include<algorithm>
using namespace std;
int sum,arr[100001];
int func(int i,int flag)
{
    if(i<1) return 0;
    if(i==1) return (flag?arr[i]:-arr[i]);
    return func(i-1,1-flag)+(flag?arr[i]:-arr[i]);
}

int main()
{
    int t,n,a,b,c,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        scanf("%d %d %d",&a,&b,&c);
        for(i=0;i<n;i++) arr[i]=(a+a*i+b)%c;
        sort(arr,arr+n);
        //memset(dp,0,sizeof(dp));
        sum=arr[0];
        printf("%d\n",sum+func(n-1,1));
    }
    return 0;
}
