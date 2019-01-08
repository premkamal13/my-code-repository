#include<stdio.h>
#include<stdlib.h>

int k=0,b[10001];

int search(int x,int i,int j)
{
    int v;
    for(v=i;v<j;v++)
    {
        if(b[v]==x) return 1;
    }
    return 0;
}

int main()
{
    int t,cnt,k,i,j,a,n,x;
    scanf("%d",&t);
    cnt=0;
    k=0;
    while(t--)
    {
        scanf("%d %d",&a,&n);
        if(search(a,0,k)) cnt--;
        else b[k++]=a;
        while(n--)
        {
            scanf("%d",&x);
            if(! (search(x,0,k) ))
            {
                b[k++]=x;
                cnt++;
            }
        }
    }
    printf("%d\n",cnt);
    return 0;
}
