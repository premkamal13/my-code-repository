#include<cstdio>
#include<algorithm>
#include<iostream>
#include<set>

using namespace std;

//define a set a
unsigned long long int s=0;
int main()
{
    std::multiset<int> a;
    int n,k,x;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&k);
        while(k--)
        {
            scanf("%d",&x);
            a.insert(x);
        }
        std::multiset<int>::iterator beg=a.begin();
        std::multiset<int>::iterator last1=a.end();
        std::multiset<int>::reverse_iterator last=a.rbegin();
        s+=*last-*beg;
        //for(std::multiset<int>::iterator i=a.begin();i!=a.end();i++) cout<<' '<<*i;
        last1--;
        a.erase(last1);
        a.erase(beg);
        //printf("<%llu>\n",s);
    }
    printf("%llu\n",s);
    return 0;
}
