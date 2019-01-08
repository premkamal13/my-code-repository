#include<cstdio>
#include<cstdlib>
#include<algorithm>

using namespace std;

pair<int,int>a[100000];

bool check(const pair<int,int>&x1,const pair<int,int>&x2)
{
    if(x1.second==x2.second)
    {
        return (x1.first<x2.first);
    }
    else
    {
        return (x1.second<x2.second);
    }
}

int main()
{
    int t,n,i,c,l;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++) scanf("%d %d",&a[i].first,&a[i].second);
            sort(a,a+n,check);
            c=0;
            l=-1;
            for(i=0;i<n;i++)
            {
                if(a[i].first>=l)
                {
                    c++;
                    l=a[i].second;
                }
            }
            printf("%d\n",c);
    }
    return 0;
}
