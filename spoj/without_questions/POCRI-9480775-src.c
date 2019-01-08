#include<stdio.h>
#include<stdlib.h>
int ans[101];
int func(int n,int k)
{
    int val;
    if(n==2) return 0;
    else return((func(n-1,k)+k)%(n-1));
}

void precompute()
{
    int n,i,val;
    ans[13]=1;
    for(n=14;n<=100;n++)
    {
        val=0;
        for(i=2;val!=11;i++)
        {
            val=func(n,i);
            //printf("%d-> %d\n",i,val);
        }
        ans[n]=i-1;
        //printf("-------");
    }
}


int main()
{
    int n;
    precompute();
    while(scanf("%d",&n),n!=0) printf("%d\n",ans[n]);
    return 0;
}
