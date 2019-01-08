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

char s[200005];
char ans[200005];
int main()
{
    int i,j;
    scanf("%s",s);
    int x=strlen(s);
    int rep=1, typo2=0;
    ans[0]=s[0];
    for(i=1,j=1;i<x;i++)
    {
        //printf("%d %d %d\n",i,rep,typo2);
        if(s[i]==s[i-1])
        {
            rep++;
            if(rep==2)
            {
                if(!typo2)
                {
                    typo2=1;
                    ans[j++]=s[i];
                }
            }
            else if(rep==1)
            {
                ans[j++]=s[i];
            }
        }
        else
        {
            ans[j++]=s[i];
            rep=1;
            if(typo2)
            {
                if(ans[j-2]!=ans[j-3]) typo2=0;
            }
        }
    }
    ans[j]='\0';
    printf("%s\n",ans);
    return 0;
}