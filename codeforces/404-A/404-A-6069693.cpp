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

char s[501][501];
int cnt[257];

int main()
{
    char t1,t2;
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%s",s[i]);
    int cnta=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(!cnt[s[i][j]])
            {
                cnta++;
                cnt[s[i][j]]++;
            }
        }
    }
    t1=s[0][0];
    t2=s[0][1];
    if(cnta!=2) printf("NO\n");
    else
    {
        int k=0,err=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(((j==k) ||(j==n-1-k)))
                {
                    if(s[i][j]!=t1) {err=1; break;}
                }
                else
                {
                    if(s[i][j]!=t2){err=1; break;}
                }
            }
            if(err) break;
            if(i<(n-1)/2) k++;
            else k--;
        }
        if(err) printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}