
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

string str;
set<string>s;
int main()
{
    int t,l,i,j;;
    scanf("%d",&t);
    while(t--)
    {
        cin >> str;
        int x=str.size(),ans=-1;
        int p=1;
        for(l=1;l<20;l++)
        {
            p<<=1;
            s.clear();
            for(i=0;i<x-l+1;i++)
            {
                j=i+l-1;
                string str1=str.substr(i,l);
                s.insert(str1);
                if(s.size()==p) break;
            }
            if(s.size()<p) {ans=l; break;}
        }
        printf("%d\n",ans);
    }
    //s.clear();
    return 0;
}
