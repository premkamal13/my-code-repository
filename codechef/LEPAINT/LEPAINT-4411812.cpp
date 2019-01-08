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

double dp[105][105][105];

int main()
{
    int i,n,c,k,j,col,cnt,t,l,r,c1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&n,&c,&k);
        for(i=1;i<=n;i++) dp[0][i][1]=1;
        for(cnt=1;cnt<=k;cnt++)
        {
            scanf("%d%d",&l,&r);
            for(i=1;i<=n;i++)
            {
                for(col=0;col<c;col++) dp[cnt][i][col]=0;
                for(col=0;col<c;col++)
                {
                    //printf(">> %d %d %d\n",cnt,i,col);
                    if(i>=l && i<=r)
                    {
                        //printf("la bla bla");
                        //printf("%d %d %d\n",cnt,i,c1);
                        dp[cnt][i][col]+= dp[cnt-1][i][col] * 0.50;
                        //printf("ffsfaf");
                        for(c1=0;c1<c;c1++)
                        {
                            //printf("%d %d %d -> %d\n",cnt,i,col, c1);
                            dp[cnt][i][(col*c1)%c] += (dp[cnt-1][i][col]*0.50)/c;
                        }
                    }
                    else
                    {
                        dp[cnt][i][col] += dp[cnt-1][i][col];
                    }
                    //printf("exit\n");
                }
            }
        }
        double expectance=0.0;
        for(i=1;i<=n;i++)
        {
            for(col=0;col<c;col++)
            {
                expectance += dp[k][i][col]*col;
            }
        }
        printf("%.10lf\n",expectance);
    }
    return 0;
}