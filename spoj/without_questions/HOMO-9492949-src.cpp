#include<cstdio>
#include<cstdlib>
#include<map>
#include<vector>
using namespace std;
map<int,int> m;
map<int,int>::iterator it;
char s[21];
int main()
{
    int t,x,c=0,homo=0,hetero=0,hom,het;
    m.clear();
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s %d",s,&x);
        if(s[0]=='i')
        {
            if(m[x]==1) homo++;
            else if(m[x]==0) hetero++;
            m[x]++;
        }
        else
        {
            if(m[x]==2) homo--;
            else if(m[x]==1) hetero--;
            m[x]--;
        }
        hom=het=0;
        if(homo>0) hom=1;
        if(hetero>1) het=1;
        if(hom)
        {
            if(het) printf("both\n");
            else printf("homo\n");
        }
        else
        {
            if(het) printf("hetero\n");
            else printf("neither\n");
        }
    }
    return 0;
}
