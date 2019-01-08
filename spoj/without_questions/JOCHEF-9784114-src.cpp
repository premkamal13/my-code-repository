#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<stack>
#define lli long long int
using namespace std;
char str[4001][4001];
int a[4001][4001],m,n;

int findlargestrect(int i)
{
    stack<int>s;
    int j=0,area,maxar=0;
    while(j<n)
    {
        if(s.empty() || a[i][s.top()]<=a[i][j]) s.push(j++);
        else
        {
            int tp=s.top();
            s.pop();
            area=a[i][tp]*(s.empty()?j:j-s.top()-1);
            if(area>maxar) { maxar=area;}
        }
    }
    while(!s.empty())
    {
        int tp=s.top();
        s.pop();
        area=a[i][tp]*(s.empty()?j:j-s.top()-1);
        if(area>maxar) { maxar=area;}
    }
    return maxar;
}

int main()
{
    lli f,maxm;
    int i,j;
    while(scanf("%d%d",&m,&n),m && n)
    {
        scanf("%lld",&f);
        for(i=0;i<m;i++)
        {
            scanf("%s",str[i]);
        }
        for(j=0;j<n;j++)
        {
             if(str[0][j]=='C') a[0][j]=0;
             else a[0][j]=1;
        }
        for(i=1;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(str[i][j]=='C') a[i][j]=0;
                else a[i][j]=a[i-1][j]+1;
            }
        }
        maxm=0;
        for(i=0;i<m;i++)
        {
            //printf("%d\n",a[i][0]);
            int x=findlargestrect(i);
            //printf("%d\n",x);
            if(x>maxm) maxm=x;
        }
        printf("%lld\n",maxm*f);
    }
    return 0;
}
