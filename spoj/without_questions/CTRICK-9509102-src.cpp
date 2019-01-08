#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<vector>
using namespace std;
int val[100001];
vector<int> v;
vector<int>::iterator it;
void simulate(int n)
{
    int c,s,i;
    v.clear();
    for(i=0;i<n;i++) v.push_back(i+1);
    //printf("initialisation done\n");
    c=1;
    it=v.begin();
    while(c<=n)
    {
        s=0;
        while(s!=c)
        {
            s++;
            it++;
            if(it==v.end()) it=v.begin();
        }
        val[(*it)]=c;
        //printf("%d %d\n",(*it),c);
        v.erase(it);
        if(it==v.end()) it=v.begin();
        c++;
    }
    //for(it=v.begin();it!=v.end();it++) printf("(%d) ",(*it));
    for(i=1;i<=n;i++) printf("%d ",val[i]);
    printf("\n");
}

int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        if(n==1) printf("1\n");
        else if(n==2) printf("2 1\n");
        else simulate(n);
    }
    return 0;
}
