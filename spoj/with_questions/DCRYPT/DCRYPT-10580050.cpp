
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

char s[100001];
int len,key;

void func(int pos)
{
    if(pos==len) return;
    if(s[pos]=='.')
    {
        printf(" ");
        func(pos+1);
        return;
    }
    int x=s[pos]+key;
    if(key>25) x-=26;
    if(s[pos]<91)
    {
        if(x>90)x-=26;
        if(key>25) x+=32;
    }
    else
    {
        if(x>122) x-=26;
        if(key>25) x-=32;
    }
    printf("%c",x);
    func(pos+1);
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&key);
        scanf("%s",s);
        len=strlen(s);
        func(0);
        printf("\n");
    }
    return 0;
}
