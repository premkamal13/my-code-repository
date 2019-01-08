#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<string>
#include<algorithm>
#include<vector>
#include<iostream>
#define psi pair<string,int>
using namespace std;
string s;
vector<psi> v;
vector<psi>::iterator it;

int main()
{
    int i;
    cin>>s;
    v.clear();
    int x=s.length();
    for(i=0;i<x;i++)
    {
        v.push_back(psi(s.substr(i,x-i+1),i));
        //cout << v[i].first<<v[i].second << endl;
    }
    sort(v.begin(),v.end());
    for(i=0;i<x;i++) printf("%d\n",v[i].second);
    return 0;
}
