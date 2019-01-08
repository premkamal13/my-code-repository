#include<cstdlib>
#include<cstdio>
#include<algorithm>
#include<map>
#include<string>

using namespace std;

map<string,int> m;
map<string,int>::iterator it;
char str[500];


int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        gets(str);
        while(n--)
        {
            gets(str);
            m[str]++;
        }
        for(it=m.begin();it!=m.end();it++)
        {
            printf("%s %d\n",(*it).first.c_str(),(*it).second);
        }
        //gets(str);
        m.clear();
    }
    return 0;
}
