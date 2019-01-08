// User: lovelotus(Prem Kamal)

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

void computeEndValues( char *s, int n, int k, int * dp )
{
    int i;
    int * onesCount = (int *) calloc( n+1, sizeof(int));
    //for(i=0;i<=n;i++) printf("%d ",onesCount[i]);
    for(i=1;i<=n;i++) onesCount[i]=onesCount[i-1]+s[i-1]-48;
    dp[0]=0;
    for(i=1;i<k;i++) dp[i]= s[i-1]-48;
    for(i=k;i<=n;i++)
    {
        dp[i]=dp[i-k]+ onesCount[i-1]-onesCount[i-k]+1-(s[i-1]-48);
    }
    free(onesCount);
}

int main()
{
    int n,k,w,l,r,i;
    scanf("%d%d%d",&n,&k,&w);
    char * s =(char *) malloc ( (n+1) * sizeof(char));
    int * dp = (int *) malloc( (n+1) * sizeof(int));
    scanf("%s",s);
    computeEndValues(s, n, k, dp);
    for(i=0;i<w;i++)
    {
        scanf("%d%d",&l,&r);
        printf("%d\n",dp[r]-dp[l-1]);
    }
    free(s);
    free(dp);
    return 0;
}