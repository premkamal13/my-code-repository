#include<cstdio>
#include<algorithm>
#include<iostream>

using namespace std;

int main()
{
    int a[1500];
    int n,i,p,s;
    while(scanf("%d",&n),n!=0)
    {
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    sort(a,a+i);
    p=0;
    for(i=1;i<n;i++)
    {
                   if(a[i]-a[i-1]>200) {p=1;break;} 
                    }
    s=2*(1422-a[n-1]);
    if(s>200) p=1;   
    if(p==0) printf("POSSIBLE\n");
    else printf("IMPOSSIBLE\n");
}
return 0;
    }
