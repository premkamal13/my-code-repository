#include<cstdio>
#include<cstdlib>
#include<map>
#include<string>
#include<cstring>
#include<iostream>
using namespace std;

map<string,int> m;
map<string,int>::iterator it;
string s;
int a[20001];
int main()
{
    int n,x,i,c;
    while(scanf("%d %d",&n,&c),n!=0 && c!=0)
    {
        m.clear();
        for(i=0;i<n;i++)
        {
            cin>> s;
            m[s]++;
        }
        memset(a,0,sizeof(a));
        for(it=m.begin();it!=m.end();it++)
            {
                a[it->second]++;
            }
        for(i=1;i<=n;i++)
        {
            printf("%d\n",a[i]);
        }
    }
return 0;
}
