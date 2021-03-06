// Author : premkamal (lovelotus)

// #include<bits/stdc++.h>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<climits>
#include<cassert>
#include<iostream>
#include<algorithm>
#include<string>
#include<utility>
#include<cctype>
#include<stack>
#include<queue>
#include<vector>
#include<map>
#include<set>
#include<deque>
 
#define lli long long int
#define ulli unsigned long long int
#define F first
#define S second
#define pii pair<int,int>
#define pip pair<int,pii>
#define pis pair<int,string>
#define pll pair<lli,lli>

using namespace std;

lli mod = 1e9+7;
char a[2001][2001];
int frndsCnt[2001], frnds[2001][2001];

int main() {
    int n, i, j, k;
    scanf("%d",&n);
    for (i = 0; i < n; i++) {
        k = 0;
        scanf("%s",a[i]);
        for (j = 0; j < n; j++) {
            if (a[i][j] == '1') {
                frnds[i][k]=j;
                k++;
            }
            frndsCnt[i] = k;
        }
    }
    int cnt = 0;
    for(i = 0; i < n ; i++) {
        for(j = i+1; j < n; j++) {
            if (a[i][j] == '0') {
                for(k = 0; k < frndsCnt[i]; k++) {
                    if (a[frnds[i][k]][j] == '1') {
                        cnt++;
                        break;
                    }
                }
            }
        }
    }
    printf("%d\n",cnt<<1);
    return 0;
}