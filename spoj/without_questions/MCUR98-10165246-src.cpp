#include<cstdio>
#include<cstdlib>
#define len 1000000
int a[len];
void precompute()
{
    int i,val,x;
    for(i=1;i<len;i++)
    {
        if(!a[i])
        {
            val=x=i;
            while(x)
            {
                val+=x%10;
                x/=10;
            }
            while(val<len)
            {
                if(a[val]) break;
                a[val]=1;
                x=val;
                while(x)
                {
                    val+=x%10;
                    x/=10;
                }
            }
        }
    }
    for(i=1;i<len;i++)
    {
        if(!a[i])  printf("%d\n",i);
    }
}

int main()
{
    precompute();
    return 0;
}
