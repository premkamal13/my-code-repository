#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#define lli long long int
#define pii pair<lli,int>
#define pb push_back
#define S second
#define F first
lli inf=1000000001;
using namespace std;

vector<pii> v;
vector<pii>::iterator it;
int main()
{
    int t,x,sum,maxsum;
    inf*=inf;
    //printf("%lld\n",inf);
    lli y,ans;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %lld",&x,&y);
        switch(x)
        {
            case 1: v.pb(pii(y+1,0));
                    v.pb(pii(inf,1));
                    break;
            case 2: v.pb(pii(0,0));
                    v.pb(pii(y,1));
                    break;
            case 3: v.pb(pii(y,0));
                    v.pb(pii(y,1));
                    break;
            case 4: v.pb(pii(0,0));
                    v.pb(pii(y,1));
                    v.pb(pii(y+1,0));
                    v.pb(pii(inf,1));
                    break;
            default: printf("err\n");
                    break;
        }
    }
    sort(v.begin(),v.end());
    sum=ans=0;
    maxsum=-1;
    //for(it=v.begin();it!=v.end();it++) printf("%d %d\n",(*it).F,(*it).S);
    for(it=v.begin();it!=v.end();it++)
    {
        //printf("%d ",sum);
        x=(*it).S;
        if(x==0) sum++;
        else sum--;
        if(sum>maxsum)
        {
            maxsum=sum;
            ans=(*it).F;
        }
    }
    printf("%d %lld\n",maxsum,ans);
    return 0;
}
