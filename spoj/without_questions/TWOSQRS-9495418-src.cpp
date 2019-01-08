#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<vector>
using namespace std;
#define len 1000001
#define lli long long int
lli squares[1000001];
int k;
void precompute()
{
    int i;
    squares[0]=0;
    for(i=1;i<1000001;i++)
    squares[i]=(long long int)i*i;
}

int main()
{
    int t,j,i,err,c,found;
    lli n,x;
    precompute();
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        i=0;j=sqrt(n);found=0;
        while(i<=j)
        {
            if(squares[i]+squares[j]==n) {found=1; break;}
            if(squares[i]>n) break;
            else if(squares[i]+squares[j]>n){j--;}
            else i++;
        }
        if(found) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
