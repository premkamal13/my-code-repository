#include<stdio.h>
#include<stdlib.h>

long long int a[100],b[100],max=1000000000000000000,dig[100];

void calc()
{
    int i=2,j;
    a[0]=1; b[0]=0;
    a[1]=b[1]=5;
    while(a[i-1]>0 && a[i-1]<=max/5) {a[i]=a[i-1]*5; i++;}
    for(j=1;j<i;j++) b[j]=b[j-1]+a[j];
    //for(j=0;j<i;j++)  printf("%lld\n",b[j]);
}

int main()
{
    long long int n;
    int i,t,j,k;
    calc();
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        i=0;
        while(n>b[i]) i++;
        //printf("Number of digits=%d\n",i);
        j=0;
        while(j<i)
        {
            dig[j]=n%5;
           // printf("((%d)) ",dig[j]);
            n=n/5;
            if(dig[j]==0) n-=1;
            j++;
        }
        j--;
        //for(k=j;k>=0;k--) printf("%d)) ",dig[k]);
        while(j>=0)
        {
            switch(dig[j])
            {
                case 0 : printf("u"); break;
                case 1 : printf("m"); break;
                case 2 : printf("a"); break;
                case 3 : printf("n"); break;
                case 4 : printf("k"); break;
            }
            j--;
        }
        printf("\n");
    }
    return 0;
}
