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
#define pip pair<int,pii>
#define F first
#define S second
#define lli long long int
using namespace std;

int cnt[105],a[105],vis[105];

int main()
{
    int i,n;
    scanf("%d",&n);
    int maxm=-1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        cnt[a[i]]++;
    }
    maxm=cnt[0];
    int cy=cnt[0];
    for(i=1;i<=100;i++)
    {
        if(cnt[i]>maxm)
        {
            if(cnt[i]*i>cy)
            {
                int val=cnt[i]*i-cy;
                int j=1;
                while(cy+j<=(cnt[i]-j)*i) j++;
                maxm=max(maxm,cnt[i]-j+1);
            }
        }
        cy+=cnt[i];
    }
    printf("%d\n",maxm);
    return 0;
}