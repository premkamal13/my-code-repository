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

int a[101];

int main()
{
    int n,i,low,hi;
    scanf("%d",&n);
    int sm=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sm+=a[i];
    }
    scanf("%d%d",&low,&hi);
    //printf("%d\n",sm);
    int sm1=0;
    int ans=0;
    for(i=0;i<n;i++)
    {
        sm1+=a[i];
        //printf("sm1= %d l- %d h-%d %d\n",sm1,low, hi,sm-sm1);
        if(sm1>=low && sm-sm1>=low && sm1<=hi && sm-sm1<=hi)
        {
            ans=i+2; break;
        }
    }
    printf("%d\n",ans);
    return 0;
}