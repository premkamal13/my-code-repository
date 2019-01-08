#include<stdio.h>
#include<stdlib.h>
#define mod 10000007

int a[101][101];

int comb(int n,int r)
{
    int s;
    if(a[n][r]) return a[n][r];
    if(n==0) return 0;
    if(n==r) return 1;
    if(r==1) return n;
    else if(n==1) return r;
    else
    {
        s=(comb(n-1,r-1) % mod + comb(n-1,r) %mod) %mod;
        return s;
    }
}

/*
int ans(int n,int r)
{
    int i,k,s;
        if(n<r) return -1;
            else if(n==r) return 1;
            else if(r==1) return 1;
            else
            {
                //k=n-r;
                i=1;
                s= comb(n-1,r-1);
                return s;
            }
}*/

int main()
{
    int n,r,i,j;
    long long int s;
    for(i=1;i<100;i++)
    {
        for(j=1;j<=i;j++)
        {
            a[i][j]=comb(i,j);
        }
    }
    //for(i=0;i<n)
    scanf("%d %d",&n,&r);
    if(n<r) printf("-1\n");
           else if(n==r) printf("1\n");
            else if(r==1) printf("1\n");
            else printf("%d\n",a[n-1][r-1]);
    return 0;
}
