// User: lovelotus(Prem Kamal)

//#include<bits/stdc++.h>
//#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<map>
#include<string>
#include<vector>
#include<queue>
#include<cstring>
#include<cstdlib>
#include<cassert>
#include<cmath>
#include<stack>
#include<set>
#include<utility>
#define pii pair<int,int>
#define pip pair<int,pii>
#define F first
#define S second
#define lli long long int
using namespace std;


int main()
{
    double a,d;
    int i,n;
    cin>>a>>d;
    scanf("%d",&n);
    int pr=0,tmp=0;
    double tmp1=0;
    for(i=1;i<=n;i++)
    {
        tmp=(int)((tmp1+d)/a);
        tmp1=(tmp1+d)-tmp*a;
        pr=(pr+tmp)%4;
        if(pr==0)
        {
            printf("%I64f %I64f\n",tmp1,0.00000000);
        }
        else if(pr==1)
        {
            printf("%I64f %I64f\n",a,tmp1);
        }
        else if(pr==2)
        {
            printf("%I64f %I64f\n",(a-tmp1),a);
        }
        else if(pr==3)
        {
            printf("%I64f %I64f\n",0.00000000,a-tmp1);
        }
    }
    return 0;
}