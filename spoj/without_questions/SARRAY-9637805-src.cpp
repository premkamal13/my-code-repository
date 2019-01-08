#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#define maxm 100001
#define maxlg 15
using namespace std;
struct element
{
    int x,y,pos;
};

struct element suffix[maxm];
int p[maxlg][maxm],n,i,steps,cnt;

bool cmp(struct element a, struct element b)
{
    if(a.x<b.x) return true;
    if(a.x>b.x) return false;
    return (a.y<b.y);
}

char str[100001];
int main()
{
    scanf("%s",str);
    n=strlen(str);
    for(i=0;i<n;i++) p[0][i]=(int)str[i];
    steps=1;
    for(cnt=1;cnt>>1<n;cnt<<=1)
    {
        for(i=0;i<n;i++)
        {
            suffix[i].x=p[steps-1][i];
            suffix[i].y=(i+cnt<n)?p[steps-1][i+cnt]:-1;
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
    for(i=0;i<n;i++) printf("%d\n",suffix[i].pos);
    return 0;
}
