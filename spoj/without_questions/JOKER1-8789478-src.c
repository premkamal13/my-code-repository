#include<stdio.h>
#include<stdlib.h>
#define mod 1000000007
int a[100000];

int main()
{
    long long int p;
    int t,n,i,j,x,s,k,max,err;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<15150;i++) a[i]=0;
        max=1;
        for(i=0;i<n;i++)
        {
            scanf("%d",&x);
            a[x]+=1;
            if(x>max) max=x;
        }
        s=err=0;p=1;
        for(i=1;i<=max;i++)
        {
            if(a[i])
            {
                x=a[i];
                //printf("<<%d>>",x);
                k=0;
                while(x--)
                {
                    p=(p%mod * (i-s-k)%mod +mod)%mod;
                    k++;
                }
                s+=a[i];
                if(s>=i+1) {err=1; break;}
            }
            //printf("(%d %lld)",s,p);
        }
        if(err) printf("0\n");
        else printf("%lld\n",p);
    }
    printf("KILL BATMAN\n");
    return 0;
}
