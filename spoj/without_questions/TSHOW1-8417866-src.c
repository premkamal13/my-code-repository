#include<stdio.h>
#include<stdlib.h>

long long int a[150];
char b[100];

int main()
{
    long long int n,m,k,nd,td;
    long long int i,j,c,t,p,nl;
    a[0]=2;
    i=1;
    while(1)
    {
        if(i>52) break;
        a[i]=2LL*a[i-1]+2LL;
        i++;
    }
    //printf("((%lld))",i);
    //for(j=0;j<i;j++) printf("<%lld> ",a[j]);
    //printf("\n\n");
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        if(n==1) {printf("5\n");}
        else if(n==2) {printf("6\n");}
        else
        {
            j=0;
            while(n>a[j]) j++;
            nl=j+1;
            nd=n-a[j-1];
            td=a[j]-a[j-1];
            //printf("%d %lld %lld\n",nl,nd,td);
            p=1;
            k=nd;
            while(p<=nl)
            {
                if(k%2==0)
                {
                    b[nl-p]='6';
                    k=k/2;
                }
                else
                {
                    b[nl-p]='5';
                    k=(k+1)/2;
                }
                p++;
            }
        for(c=0;c<nl;c++) printf("%c",b[c]);
        printf("\n");
        }
    }
 return 0;
}
