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

int great(string x,string y)
{
    if(x.size()>y.size()) return 1;
    if(x.size()<y.size()) return 0;
    return x>=y;
}

char s[100001];

int main()
{
    int i;
    scanf("%s",s);
    int x=strlen(s);
    string a,b;
    a.clear();
    b.clear();
    int ans=0;
    for(i=0;i<x;i++)
    {
        b+=s[i];
        if(i<x-1 && s[i+1]=='0');
        else
        {
            if(great(a,b))
            {
                ans++;
            }
            else ans=1;
            a+=b;
            b.clear();
        }
    }
    printf("%d\n",ans);
    return 0;
}