#include<stdio.h>
#include<stdlib.h>
int pv[11];

int calc(int r1,int r2,int r3)
{
    if(r1)
    {
        if(r2)
        {
            if(r3) return 7;
            else return 6;
        }
        else
        {
            if(r3) return 5;
            else return 4;
        }
    }
    else
    {
        if(r2)
        {
            if(r3) return 3;
            else return 2;
        }
        else
        {
            if(r3) return 1;
            else return 0;
        }
    }
}

int main()
{
    int t,k,i,r1,r2,r3,n,p,c,j,x;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        for(i=0;i<=10;i++) pv[i]=0;
        r1=r2=r3=1;
        scanf("%d%d",&n,&p);
        for(i=0;i<n;i++)
        {
            c=0;
            for(j=0;j<p;j++)
            {
                scanf("%d",&x);
                c+=x;
                if(x) pv[j]=1;
            }
            if(c==p) r3=0;
            else if(c==0) r2=0;
        }
        for(i=0;i<p;i++)
        {
            if(!(pv[i])) r1=0;
        }
        //printf("%d %d %d",r1,r2,r3);
        printf("Case %d: %d\n",k,calc(r1,r2,r3));
    }
    return 0;
}
