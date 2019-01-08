#include<stdio.h>
#include<stdlib.h>
#define ulli unsigned long long int
char s[1000001];

int main()
{
    int t,cur,minm,n,k,i,j,pos;
    ulli mincnt,maxcnt;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&k);
        scanf("%s",s);
        cur=minm=0;
        mincnt=1;
        maxcnt=0;
        i=j=0;
        while(i<n)
        {
            cur+=s[i]-48;
            //printf("%d cur=%d, minm= %d \n",i,cur,minm);
            if(cur-minm==k) {maxcnt+=mincnt;}
            if(cur-minm==0) {mincnt++;}
            else if(cur-minm>k)
            {
                while(j<i && s[j]-48!=1) j++;
                if(j!=i)
                {
                    minm++; mincnt=1;
                    j++;
                    //printf("(%d %d)\n",i,j);
                    while(j<i && s[j]-48==0) {mincnt++;j++;}
                    //printf("%d,(%d %d)\n",mincnt,i,j);
                    cur-=s[i]-48;i--;
                }
            }
            i++;
            //printf("%llu\n",maxcnt);
        }
        //maxcnt+=mincnt;
        printf("%llu\n",maxcnt);
    }
    return 0;
}
