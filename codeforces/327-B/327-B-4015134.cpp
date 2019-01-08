#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<vector>

using namespace std;
int len,n;
void sieve()
{
    auto vector<bool> a(len,true);
    int sq=sqrt(len);
    int i,j,k,i2,m;
    for(i=3;i<=sq;i+=2)
    {
            while(a[i]==false)
            {
                i+=2;
            }
            j=i*(i-2);
            i2=i<<1;
            while((j=i2+j)<=len)
            {
                a[j]=false;
            }
    }
    j=0;
    printf("2 ");
    for(i=3;i<len; i+=2)
        {
            if(j==n-1) break;
            else if(a[i])
            {
                j++;
                printf("%d ",i);
            }
        }
        printf("\n");
}

int main()
{
    scanf("%d",&n);
    len=n*20;
    sieve();
    return 0;
}