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

char s[101][101];
int visited[101][101];
int tx[]={-1,1,0,0,0};
int ty[]={0,0,0,-1,1};

int check(int i,int j)
{
    for(int p=0;p<5;p++)
    {
        if(s[i+tx[p]][j+ty[p]]!='#') return 0;
        if(visited[i+tx[p]][j+ty[p]]) return 0;
    }
    return 1;
}

void fill(int i,int j)
{
    for(int p=0;p<5;p++)
    {
        visited[i+tx[p]][j+ty[p]]=1;
    }
}

int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%s",s[i]);
    for(i=1;i<n-1;i++)
    {
        for(j=1;j<n-1;j++)
        {
            if(check(i,j)) fill(i,j);
        }
    }
    int err=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(s[i][j]=='#' && (!visited[i][j]))
            {
                err=1; break;
            }
        }
    }
    if(err) printf("NO\n");
    else printf("YES\n");
    return 0;
}