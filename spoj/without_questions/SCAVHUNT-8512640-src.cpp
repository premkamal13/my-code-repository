#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<map>
#include<set>
#include<algorithm>

using namespace std;
std::map<string,string>map1;
std::set<string>set1;
string s1,s2,s3;

int main()
{
    int k=1,i,t,n;
    scanf("%d",&t);
    while(t--)
    {
        map1.clear();
        set1.clear();
        scanf("%d",&n);
        for(i=1;i<n;i++)
        {
            cin >> s1>> s2;
            map1[s1]=s2;
            set1.insert(s1);
            set1.erase(s2);
            //printf("lolu\n");
        }
        s3=*set1.begin();
        printf("Scenario #%d:\n",k++);
        cout << s3 << endl;
        for(i=1;i<n;i++)
        {
            s2=map1[s3];
            cout << s2 <<endl;
            s3=s2;
        }
        printf("\n");
    }
    return 0;
}
