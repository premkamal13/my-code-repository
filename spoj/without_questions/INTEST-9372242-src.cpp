#include<cstdio>
#include<cstdlib>
#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int t,n,cnt,x;
    scanf("%d%d",&n,&t);
    cnt=0;
    while(n--)
    {
        scanf("%d",&x);
        if(x%t==0) cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}
