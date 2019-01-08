//lovelotus

#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#define maxm 100001
#define maxlg 25
using namespace std;
#define inf 1000000001
#define lli long long int
lli mod=1000000009;
struct element
{
    int x,y,pos;
};

struct element suffix[maxm];
int p[maxlg][maxm],n,i,steps,cnt;
char str[100001];
bool cmp(struct element a, struct element b)
{
    if(a.x<b.x) return true;
    if(a.x>b.x) return false;
    return (a.y<b.y);
}

int lcp(int ax,int ay)
{
    int k;
    int ret=0;
    if(ax==ay) return n-ax;
    k=steps-1;
    while(k>=0 && ax<n && ay<n)
    {
        if(p[k][ax]==p[k][ay])
        {
            ax+=1<<k;
            ay+=1<<k;
            ret+=1<<k;
        }
        k--;
    }
    return ret;
}

void construct()
{
    for(i=0;i<n;i++) p[0][i]=(int)str[i];
    steps=1;
    for(cnt=1;cnt>>1<n;cnt<<=1)
    {
        for(i=0;i<n;i++)
        {
            suffix[i].x=p[steps-1][i];
            suffix[i].y=(i+cnt<n)?p[steps-1][i+cnt]:-inf;
            suffix[i].pos=i;
        }
        sort(suffix,suffix+n,cmp);
        for(i=0;i<n;i++)
        {
            if(i>0 && suffix[i].x==suffix[i-1].x && suffix[i].y==suffix[i-1].y)
            {
                p[steps][suffix[i].pos]=p[steps][suffix[i-1].pos];
            }
            else p[steps][suffix[i].pos]=i;
        }
        steps++;
    }
}


int main()
{
    int t;
    lli sum;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",str);
        n=strlen(str);
        construct();
        sum=0;
        for(i=1;i<n;i++)
        {
            sum=(sum+lcp(suffix[i-1].pos,suffix[i].pos))%mod;
        }
        lli nl=(lli)n;
        lli olsub=((nl*nl+nl)/2)%mod;
        printf("%lld\n",olsub-sum);
    }
    return 0;
}
