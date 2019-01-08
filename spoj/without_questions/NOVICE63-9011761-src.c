#include<stdio.h>
#include<stdlib.h>

long long int a[65],b[65],s[65],c[65][65];

long long int comb(long long int n,long long int r)
{
    //if(r==1) return n;
    if(c[n][r]) return c[n][r];
    else c[n][r]=(comb(n-1,r)+comb(n-1,r-1));
    return c[n][r];
}

void computepower()
{
    int i;
    b[0]=1;
    for(i=1;i<61;i++)
    {
        b[i]=b[i-1]*2;
    }
}

void compute()
{
    long long int k;
    int i,j;
    for(i=1;i<61;i++)for(j=1;j<61;j++) c[i][j]=0;
    for(i=1;i<61;i++) {c[i][1]=i;c[i][i]=1;}
    a[0]=0;a[1]=1;
    for(i=2;i<62;i++)
    {
        if(i%2==0) a[i]=0;
        else {k=i;a[i]=comb(k,(k-1)/2);}
    }
   // for(i=0;i<61;i++) printf("%lld\n",a[i]);
    s[1]=0;
    for(i=2;i<62;i++)
    {
        s[i]=a[i-1]+s[i-1];
    }
    s[1]=1;
    //for(i=1;i<62;i++) printf("%lld\n",s[i]);
}

int main()
{
    int t,i;
    long long int n;
    computepower();
    //for(i=1;i<61;i++) printf("%lld\n",b[i]);
    //printf("power computed\n");
    compute();
    //printf("combination computed\n");
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        if(n==2) printf("1\n");
        else{
                for(i=1;i<62;i++)
                {
                    if(b[i]==n) break;
                }
            printf("%lld\n",s[i]);
           }
    }
    return 0;
}
