#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define len 1000001
#define lli long long int
int k;
int main()
{
    int t,j,i,err,c,found;
    lli n,x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        i=0;j=sqrt(n);found=0;
        while(i<=j)
        {
            x=(lli)i*i;
            y=(lli)j*j;
            if(x+y==n) {found=1; break;}
            if(x>n) break;
            else if(x+y>n){j--;}
            else i++;
        }
        if(found) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
