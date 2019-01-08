#include<cstdio>
#include<cstdlib>
#include<map>
#include<set>
using namespace std;
#define pii pair<int,int>
#define F first
#define S second
map<int,pii> m;
map<int,pii>::iterator it;
set<pii> s;
set<pii>::iterator it1,it2,it3;

int main()
{
    int t,cnt,err,i,x,y,z,n;
    scanf("%d",&t);
    while(t--)
    {
        m.clear();
        s.clear();
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d %d %d",&x,&y,&z);
            m[x]=pii(y,z);
        }
        cnt=1;it=m.begin();
        s.insert(pii(it->S.F,it->S.S));
        for(it++;it!=m.end();it++)
        {

            err=0;
            y=it->S.F;
            z=it->S.S;
            it1=s.lower_bound(it->S);
            if(it1==s.begin() || z<(--it1)->S)
            {
                cnt++;
                s.insert(it->S);
                it2=s.upper_bound(it->S);
                while(it2!=s.end())
                {
                    if(it2->F > y && it2->S > z)
                    {
                        it3=++it2;
                        s.erase(--it2);
                        it2=it3;
                    }
                    else break;
                }

            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}