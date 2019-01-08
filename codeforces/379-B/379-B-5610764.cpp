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

int a[301];

int main()
{
    int n,i;
    scanf("%d",&n);
    int cnt=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        cnt+=a[i];
    }
    i=0;
    int nos=0;
    while(nos<cnt)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]) {printf("P"); nos++; a[i]--;}
            if(nos>=cnt || i==n-1) break;
            printf("R");
        }
        if(nos>=cnt) break;
        for(i=n-2;i>0;i--)
        {
            printf("L");
            if(a[i]) {printf("P"); nos++; a[i]--;}
            if(nos>=cnt) break;
        }
        if(nos<cnt) printf("L");
    }
    return 0;
}