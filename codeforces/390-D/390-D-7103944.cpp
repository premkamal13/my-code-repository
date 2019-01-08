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

stack<pii>targetPoints;
queue<pii>q;
int penalty;

int tx[]={0,1};
int ty[]={1,0};
bool visited[51][51];

bool validTargetPoint(int x, int y, int maxX, int maxY )
{
    if(x>maxX || y> maxY || x<1 || y<1) return 0;
    if(visited[x][y]) return 0;
    visited[x][y]= true;
    return 1;
}

void findTargetPoints( int n, int m, int k )
{
    penalty=2;
    targetPoints.push(pii(1,1));
    q.push(pii(1,1));
    visited[1][1]= true;
    k--;
    if(k)
    {
        while(!q.empty())
        {
            struct pii xyPair = q.front();
            q.pop();
            for(int p=0; p<2; p++)
            {
                if(validTargetPoint(xyPair.F+tx[p],xyPair.S+ty[p], n, m))
                {
                    targetPoints.push(pii(xyPair.F+tx[p],xyPair.S+ty[p]));
                    q.push(pii(xyPair.F+tx[p],xyPair.S+ty[p]));
                    k--;
                    penalty+=xyPair.F+tx[p] + xyPair.S+ty[p];
                    if(k==0) break;
                }
            }
            if(k==0) break;
        }
    }
    penalty -= targetPoints.size();
}


void printPathFor( pii coordinate )
{
    int targetX = coordinate.F;
    int targetY = coordinate.S;
    int i=1,j=1;
    for(i=1;i<targetX;i++)
    {
        printf("(%d,%d) ",i,1);
    }
    if(targetY!=1) printf("(%d,%d) ",i,1);
    else printf("(%d,%d)\n",i,1);
    for(j=2;j<targetY;j++)
    {
        printf("(%d,%d) ",i,j);
    }
    if(targetY!=1) printf("(%d,%d)\n",i,j);
}


int main()
{
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    findTargetPoints(n,m,k);
    printf("%d\n",penalty);
    while(!targetPoints.empty())
    {
        pii targetCoordinate = targetPoints.top();
        printPathFor( targetCoordinate );
        targetPoints.pop();
    }
    return 0;
}