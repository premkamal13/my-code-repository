
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
//kmp
char s[100001],pat[100001];
int lps[100001];

void computelps(int y)
{
    int j=0,i=1;
    lps[0]=0;
    while(i<y)
    {
        if(pat[i]==pat[j])
        {
            j++;
            lps[i]=j;
            i++;
        }
        else
        {
            if(j) j=lps[j-1];
            else {lps[i]=0;i++;}
        }
    }
}

int kmp()
{
    int x=strlen(s);
    int y=strlen(pat);
    computelps(y);
    int i=0,j=0;
    while(i<x)
    {
        if(pat[j]==s[i])
        {
            i++;
            j++;
        }
        if(j==y) return 1;
        else if(pat[j]!=s[i])
        {
            if(j) j=lps[j-1];
            else i++;
        }
    }
    return 0;
}

int main()
{
    int t,n,p,i,j,x;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        scanf("%d",&p);
        for(i=1;i<n;i++)
        {
            scanf("%d",&x);
            if(x>p) s[i-1]='G';
            else if(x<p) s[i-1]='L';
            else if(x==p) s[i-1]='E';
            p=x;
        }
        s[i]='\0';
        scanf("%s",pat);
        x=kmp();
        if(x) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
