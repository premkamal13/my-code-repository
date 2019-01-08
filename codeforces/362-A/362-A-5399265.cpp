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
#define INF 100000001
using namespace std;

int tx[]={-2,-2,2,2};
int ty[]={-2,2,-2,2};
int dist1[11][11],dist2[11][11];
char s[11][11];

void display()
{
    int i,j;
    for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
            {
                if(dist1[i][j]!=INF) printf("%d ",dist1[i][j]);
                else printf("M ");
            }
            printf("\n");
        }
        printf("\n 2nd k\n");
        for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
            {
                if(dist2[i][j]!=INF) printf("%d ",dist2[i][j]);
                else printf("M ");
            }
            printf("\n");
        }
}

int valid(int i,int j)
{
    if(i<0 || j<0 || i>7 || j>7) return 0;
    return 1;
}

void floodfill1(int i,int j)
{
    //printf("floodfill1\n");
    queue<pii>q;
    int i1,j1;
    for(i1=0;i1<8;i1++)
    {
        for(j1=0;j1<8;j1++) dist1[i1][j1]=INF;
    }
    //display();
    q.push(pii(i,j));
    dist1[i][j]=0;
    while(!q.empty())
    {
        pii x=q.front();
        i=x.F;
        j=x.S;
        q.pop();
        int d=dist1[i][j];
        for(int p=0;p<4;p++)
        {
            int i1=i+tx[p];
            int j1=j+ty[p];
            if(valid(i1,j1) && (dist1[i1][j1]==INF))
            {
                dist1[i1][j1]=d+1;
                q.push(pii(i1,j1));
            }
        }
    }
}

void floodfill2(int i,int j)
{
    queue<pii>q;
    int i1,j1;
    for(i1=0;i1<8;i1++)
    {
        for(j1=0;j1<8;j1++) dist2[i1][j1]=INF;
    }
    q.push(pii(i,j));
    dist2[i][j]=0;
    while(!q.empty())
    {
        pii x=q.front();
        i=x.F;
        j=x.S;
        q.pop();
        int d=dist2[i][j];
        for(int p=0;p<4;p++)
        {
            int i1=i+tx[p];
            int j1=j+ty[p];
            if(valid(i1,j1) && dist2[i1][j1]==INF)
            {
                dist2[i1][j1]=d+1;
                q.push(pii(i1,j1));
            }
        }
    }
}



int main()
{
    int t,i,j;
    scanf("%d",&t);
    while(t--)
    {
        for(i=0;i<8;i++)
        {
            scanf("%s",s[i]);
        }
        int f=0;
        for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
            {
                if(s[i][j]=='K')
                {
                    if(!f) {floodfill1(i,j); f=1;}
                    else floodfill2(i,j);
                }
            }
        }
        //display();
        int ans=0;
        for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
            {
                if(dist1[i][j]!=INF && dist2[i][j]!=INF && (dist1[i][j]+dist2[i][j])%2==0 && s[i][j]!='#')
                {
                    ans=1; break;
                }
            }
            if(ans) break;
        }
        if(ans) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}