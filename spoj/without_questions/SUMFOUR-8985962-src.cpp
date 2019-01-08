// store 2 rows sum, cuz u cant use more memory, then compare to rest required...
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<algorithm>
using namespace std;

int a[4001][4];
vector<int>v;

int main()
{
    int n,i,j,x,count,b1,b2;
    scanf("%d",&n);
    for(i=0;i<n;i++) for(j=0;j<4;j++) scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            x=a[i][0]+a[j][1];
            v.push_back(x);
        }
    }
    sort(v.begin(),v.end());
    count=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            x=a[i][2]+a[j][3];
            count+=(upper_bound(v.begin(),v.end(),-x)-lower_bound(v.begin(),v.end(),-x));
        }
    }
    printf("%d\n",count);
return 0;
}
