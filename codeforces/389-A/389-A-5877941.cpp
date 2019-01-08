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

int a[101],hash1[101];

int main()
{
    int i,n,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        hash1[a[0]]=1;
    }
    int sm=101;
    while(1)
    {
        int f=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    f=1;
                    hash1[a[i]-a[j]]=1;
                    a[i]=a[i]-a[j];
                }
            }
        }
        if(!f) break;
    }
    int min=-1;
    for(i=1;i<=100;i++)
    {
        if(hash1[i]) {min=i; break;}
    }
    printf("%d\n",min*n);
    return 0;
}