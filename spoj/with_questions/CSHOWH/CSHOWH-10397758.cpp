
// User: lovelotus

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
#define pip pair<int,pair>
#define F first
#define S second
#define lli long long int

using namespace std;

lli n,ans;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        if(n&1) ans=-1;
        else if(n==2) ans=-1;
        else
        {
            int x=n%10;
            switch(x)
            {
                case 4:
                case 6: ans=1;break;
                case 8:
                case 2:
                case 0: ans=2; break;
            }
        }
        printf("%lld\n",ans);
    }
    return 0;
}
