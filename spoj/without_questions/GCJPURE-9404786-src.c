//dp is also ok

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define lli long long int
lli mod=100003;
lli cmb[501][501],soln[501][501],arr[501];

void allcombinations()
{
    int i,j;
    for(i=0;i<501;i++) cmb[i][0]=cmb[i][i]=1;
    for(i=1;i<501;i++)
    {
        cmb[i][0]=1;
        for(j=1;j<501;j++)
        {
            cmb[i][j]=(cmb[i-1][j]+cmb[i-1][j-1])%mod;
        }
    }
}


lli sol(int n,int k)
{
    int i;
    if(k==1) return 1;
    if(k<0 || k>n) return 0;
    if(soln[n][k]!=-1) return soln[n][k];
    lli sum=0;
    for(i=1;i<k;i++)
    {
        if(n-k>=k-i) sum+=(sol(k,i)*cmb[n-k-1][k-i-1])%mod;
    }
    return soln[n][k]=sum%mod;
}

lli func(int n)
{
    int i=1,k;
    lli sum=0;
    for(k=2;k<n;k++)
    {
        sum=0;
        for(i=1;i<=k;i++)
        sum=(sum+sol(k,i))%mod;
        arr[k]=sum%mod;
    }
}

int main()
{
    //freopen("C:\\Users\\lovelotus\\Desktop\\input.txt","r",stdin);
    //freopen("C:\\Users\\lovelotus\\Desktop\\output.txt","w",stdout);
    allcombinations();
    int t,i,n,p=1;
    memset(soln,-1,sizeof(soln));
    func(501);
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("Case #%d: %lld\n",p++,arr[n]);
    }

    //printf("int arr[]={0,0,");
    //for(i=2;i<501;i++) {memset(soln,-1,sizeof(soln));printf("%lld, ",func(i));}
    //printf("0}");
    return 0;
}
