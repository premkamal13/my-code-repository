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

using namespace std;
vector<string>v;
vector<string>::iterator it;
string::iterator it1;

char s[1000001];
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",s);
        v.push_back(s);
    }
    scanf("%s",s);
    int lens=strlen(s);
    int j=0,err=0,cnt=0;
    for(it=v.begin();it!=v.end();)
    {
        string s1=(*it);
        //cout<<(*it)<<endl;
        while(j<lens && s[j]!='<') j++;
        while(j<lens && s[j]!='3') j++;
        if(j==lens) {err=1;break;}
        for(it1=s1.begin();it1!=s1.end();it1++)
        {
            while(j<lens && (*it1)!=s[j]) j++;
            if(j<lens) j++;
        }
        if(j==lens) {err=1; break;}
        if(it1==s1.end()) {it++; cnt++;}
    }
    //if(cnt<n) err=1;
    if(it!=v.end()) err=1;
    else
    {
        while(j<lens && s[j]!='<') j++;
        while(j<lens && s[j]!='3') j++;
        if(j==lens) err=1;
    }
    if(err) printf("no\n");
    else printf("yes\n");
    return 0;
}