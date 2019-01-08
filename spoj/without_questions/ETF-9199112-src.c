#include<stdio.h>
#include<stdlib.h>
// euler product function
int etf(int n)
{
    //if(n==1) return 1;
    int i,val;
    val=n;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            val-=val/i;
            while((n%i)==0)
            {
                n/=i;
            }
        }
    }
    if(n>1)
    {
        val-=val/n;
    }
    return val;
}

int main()
{
    int n,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("%d\n",etf(n));
    }
    return 0;
}
