#include<stdio.h>
#include<stdlib.h>
#define MAX 100000000
#define MIN -1*MAX
#define lli long long int
int a[100001];
int main()
{
    int t,i,j,n;
    lli cur,maxm,minm,mincnt,mxcnt;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++) scanf("%d",&a[i]);
        maxm=MIN;
        minm=0;
        cur=0;
        mincnt=1;//stores the number of ways in which minm can be reached
        mxcnt=0;//stores the answer
        for(i=0;i<n;i++)
        {
            cur+=a[i];
            if(cur-minm==maxm){mxcnt+=mincnt;}
            else if(cur-minm>maxm){maxm=cur-minm; mxcnt=mincnt;}
            if(cur==minm) mincnt++;
            else if(cur<minm) {minm=cur; mincnt=1;}
            }
        printf("%lld %lld\n",maxm,mxcnt);
    }
    return 0;
}
