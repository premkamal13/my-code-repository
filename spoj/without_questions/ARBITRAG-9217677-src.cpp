#include<cstdio>
#include<cstdlib>
#include<map>
#include<string>
#include<iostream>


//Floyd Warshall
using namespace std;

map<string,int> m;
string str,str1,str2;
double g[101][101],w;
double inf=100000001.111111,base=0.000000;

int arbitrage(int t)
{
    int i,iv,j;
    for(iv=0;iv<t;iv++)
    {
        for(i=0;i<t;i++)
        {
            for(j=0;j<t;j++)
            {
                if(g[i][iv]*g[iv][j]>g[i][j])
                {
                    g[i][j]=g[i][iv]*g[iv][j];
                }
            }
        }
    }
    for(i=0;i<t;i++)
    {
        if(g[i][i]>1.0) return i;
    }
    return i;
}

int main()
{
    int t,i,j,n,p=1,err=0;
    while(scanf("%d",&t),t!=0)
    {
        m.clear();
        for(i=0;i<t;i++)
        {
            cin >> str;
            m[str]=i;
        }
         for(i=0;i<t;i++)
         {
             for(j=0;j<t;j++)
             {
                 g[i][j]=base;
             }
             //g[i][i]=base;
         }
         scanf("%d",&n);
         err=0;
         for(i=0;i<n;i++)
         {
             cin >> str1;
             scanf("%lf",&w);
             cin >> str2;
             g[m[str1]][m[str2]]=w;
             //if(m[str1]==m[str2] && ((w<1.000000)|| w>1.00000)) err=1;
         }
         if(arbitrage(t)<t) printf("Case %d: Yes\n",p);
         else printf("Case %d: No\n",p);
         p++;
    }
    return 0;
}
