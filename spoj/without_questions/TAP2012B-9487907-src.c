#include<stdio.h>
#include<stdlib.h>

int calc(int n)
{
    int i,j,val,cnt=0;
    for(i=0;i<=n;i++)
    {
        for(j=(i>0?i:1);j<=n && i*j<=n;j++)
        {
            if((n-i*j)%(i+j)==0)
            {
                val=(n-i*j)/(i+j);
                if(val<=n&&  val>=j) cnt++;
            }
        }
    }
    return cnt;
}


int main()
{
    int i,n;
    while(scanf("%d",&n),n!=-1)
    {
        printf("%d\n",calc(n));
    }
    return 0;
}
