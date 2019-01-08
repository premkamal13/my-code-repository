#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<set>
#include<string>
#include<iostream>

#define lli long long int
using namespace std;
string a,b,c,x;
set<string>s;
set<string>::iterator it;
int main()
{
    int t,n,i,err,l1,l2;
    scanf("%d",&t);
    while(t--)
    {
        s.clear();
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            cin>>x;
            s.insert(x);
        }
        it=s.begin();
        it++;
        err=0;
        for(;it!=s.end();it++)
        {
            a=*it;
            it--;
            b=*it;
            l1=a.length();
            l2=b.length();
            if(l1>=l2)
            {
                c=a.substr(0,l2);
                if(b.compare(c)==0) {err=1; break;}
            }
            it++;
        }
        if(err) printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}
