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

int cntX[101],cntY[101];

int main()
{
    int n,i,x,y;
    scanf("%d",&n);
    int minX=0,minY=0;
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&x,&y);
        if(!cntX[x])
        {
            cntX[x]++;
            minX++;
        }
        if(!cntY[y])
        {
            cntY[y]++;
            minY++;
        }
    }
    printf("%d\n",min(minX,minY));
    return 0;
}