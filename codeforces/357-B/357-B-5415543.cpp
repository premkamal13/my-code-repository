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

int n,m,hash[200001];

int main()
{
    int i,x,y,z;
    scanf("%d%d",&n,&m);
    for(i=0;i<m;i++)
    {
        scanf("%d%d%d",&x,&y,&z);
        int a=hash[x];
        int b=hash[y];
        int c=hash[z];
        if(a==1)
        {
               if(b==2) c=3;
               else if(b==3) c=2;
               else if(c==2) b=3;
               else
               {
                   b=2; c=3;
               }
        }
        else if(a==2)
        {
               if(b==1) c=3;
               else if(b==3) c=1;
               else if(c==1) b=3;
               else
               {
                   b=1;
                   c=3;
               }
        }
        else if(a==3)
        {
            if(b==1) c=2;
               else if(b==2) c=1;
               else if(c==1) b=2;
               else
               {
                   b=1;
                   c=2;
               }
        }
        else
        {
            if(b==1)
            {
                if(c==2) a=3;
                else if(c==3) a=2;
                else{c=3;a=2;}
            }
            else if(b==2)
            {
                if(c==1) a=3;
                else if(c==3) a=1;
                else{c=3; a=1;}
            }
            else if(b==3)
            {
                if(c==1) a=2;
                else {c=2; a=1;}
            }
            if(c==1)
            {
                if(b==2) a=3;
                else {b=3; a=2;}
            }
            else if(c==2)
            {
                if(b==1) a=3;
                else {b=3; a=1;}
            }
            else if(c==3)
            {
                if(b==1) a=2;
                else {b=2; a=1;}
            }
            else
            {
                   a=3;
                   b=1;
                   c=2;
            }
        }
        hash[x]=a;
        hash[y]=b;
        hash[z]=c;
    }
    for(i=1;i<n;i++) printf("%d ",hash[i]); printf("%d\n",hash[n]);
    return 0;
}