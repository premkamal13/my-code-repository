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

char s1[11],s2[11];

int main()
{
    scanf("%s%s",s1,s2);
    int val=((s1[0]-48)*10+s1[1]-48)*60+(s1[3]-48)*10+s1[4]-48;
    int val2=((s2[0]-48)*10+s2[1]-48)*60+(s2[3]-48)*10+s2[4]-48;
    int val3=val-val2;
    if(val3<0) val3+=24*60;
    int h=val3/60;
    int m=val3%60;
    if(h<10) printf("0%d:",h);
    else printf("%d:",h);
    if(m<10) printf("0%d\n",m);
    else printf("%d\n",m);
    return 0;
}