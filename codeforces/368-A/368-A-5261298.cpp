#include<cstdio>
#include<cstdlib>
#include<algorithm>

using namespace std;
int a[1001];
int main()
{
    int n,k,cost,cnt,i,m,j;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+i);
    scanf("%d",&m);
    cost=cnt=0;
    j=0;
    while(j<n)
    {
        if(cnt==m) break;
        cost+=a[j];
        j++;
        cnt++;
    }
    if(cnt<m) cost-=k*(m-cnt);
    printf("%d\n",cost);
    return 0;
}