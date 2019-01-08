#include<cstdio>
#include<cstdlib>
#include<cstring>
#define lli long long int
using namespace std;

int main()
{
    lli ones,x, pdt;
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        ones=0;
        int f=0;
        pdt=-1;
        for(int i=0;i<n;i++)
        {
            scanf("%lld",&x);
            if(x<0) x=-x;
            if(x==1) ones++;
            else if(x) {f=1;pdt*=x;}
        }
        ones*=-1;
        if(f) printf("%lld\n",pdt+ones);
        else printf("%lld\n",ones);
    }
    return 0;
}
