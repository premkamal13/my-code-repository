#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<vector>
#include<map>
using namespace std;
#define pii pair<char,char>

int min(int x,int y)
{
    return (x<y?x:y);
}

map<pii,int> m;
char color[15]="GRYBOGRYBO";
char s[1000001];
void precompute()
{
    m.clear();
    int i,j,k;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            m[pii(color[i],color[j])]=m[pii(color[i],color[j])]=j-i>=0?j-i:i-j;
        }
    }
    /*for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("(%c%c %d) ",color[i],color[j],m[pii(color[i],color[j])]);
        }
        printf("\n");
    }*/
}


int main()
{
    precompute();
    int t,k,x,cnt,p=1,j,i,maxm,dist;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&k);
        scanf("%s",s);
        x=strlen(s);
        maxm=1;
        cnt=1;
        dist=0;
        j=1;
        for(i=1;i<x;i++)
        {
            dist+=m[pii(s[i-1],s[i])];
            cnt++;
            if(dist>k)
            {
                while(dist>k)
                {
                    dist-=m[pii(s[j-1],s[j])];
                    j++;
                    cnt--;
                }
            }
            if(cnt>maxm) maxm=cnt;
        }
        printf("Scenario #%d: %d\n",p++,maxm);
    }
    return 0;
}
