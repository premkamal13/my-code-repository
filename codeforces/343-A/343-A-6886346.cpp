/*
User: lovelotus (Prem Kamal)
*/

#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
#include<utility>
#include<climits>
#include<cctype>

#define pii pair<int,int>
#define pip pair<int,pii>
#define lli long long int
#define F first
#define S second

using namespace std;

lli a,b,cnt;

int main()
{
    cin >> a >> b;
    cnt=0;
    while(a && b)
    {
        if(a>b)
        {
            cnt+=a/b;
            a%=b;
        }
        else
        {
            cnt+=b/a;
            b%=a;
        }
    }
    cout<< cnt << endl;
    return 0;
}