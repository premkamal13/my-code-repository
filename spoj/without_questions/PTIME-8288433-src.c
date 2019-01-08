#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int a[10001];
int b[1300][2];
int i,j,k;


int isprime(int x)
{
   // printf("inisprime\n");
    int sq,v,f=1;
    if(x==2||x==3||x==5||x==7||x==11) return 1;
    else if(x<11||x%2==0) return 0;
    else
    {
        j=3;
        v=2;
        f=1;
        sq=(int)sqrt(x);
        while(j<=sq)
        {
            if(x%j==0) {f=0;break;}
            if(j<11) j+=2;
            else
            {
                j=j+v;
                v=6-v;
            }
        }
        if(f)return 1;
        else return 0;
    }
}

void findprime(int n)
{
    //printf("infindprime\n");
    int i;
    k=0;
    for(i=2;i<n;i++)
    {
        if(isprime(i)) b[k++][0]=i;
    }
}

void findfactor(n)
{
    //printf("infindfactor\n");
    int q,m,s;
    for(i=0;i<k;i++)
    {
        q=b[i][0];
        s=0;
        m=n;
        while(m>0)
        {
            //printf("infindfactorloop\n");
            m=m/q;
            s+=m;
            //printf("<%d>",q);
        }
        b[i][1]=s;
    }
}

int main()
{
int n;
scanf("%d",&n);
findprime(n);
findfactor(n);
for(i=0;i<k-1;i++)
{
    printf("%d^%d * ",b[i][0],b[i][1]);
}
    printf("%d^%d\n",b[k-1][0],b[k-1][1]);
return 0;
}
