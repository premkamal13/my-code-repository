#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int k=1,n;
    while(scanf("%d",&n),n!=0)
    {
        if(n==1) printf("Case %d, N = %d, # of different labelings = 1\n",k++,n);
        printf("Case %d, N = %d, # of different labelings = %lld\n",k++,n,(long long int)pow(n,n-2));
    }
    return 0;
}
