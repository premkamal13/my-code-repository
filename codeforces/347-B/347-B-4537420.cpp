#include<cstdio>
#include<cstdlib>
#include<cmath>
using namespace std;
int a[100009],hash[1000001];

int main()
{
    int n,i,f,cnt,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
       if(a[i]<=100000)hash[a[i]]=i+1;
    }
    cnt=f=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==i)
        {
            cnt++;
            hash[a[i]]=0;
        }
    }
    for(i=0;i<n;i++)
    {
         if(hash[i]==a[i]+1) {f=2; break;}
         else if(hash[i])f=1;
    }
    cnt+=f;
    printf("%d\n",cnt);
    return 0;
}