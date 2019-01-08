#include<stdio.h>
#include<stdlib.h>
#include<cmath>
#include<queue>
#include<cstring>
#include<algorithm>
#define pii pair<int,int>
#define F first
#define S second
using namespace std;
#define len 10001
int prime[len];
int visited[len];
int precompute()
{
    int i,j,sqt,i2;
    sqt=sqrt(len);
    for(i=4;i<len;i+=2) prime[i]=1;
    for(i=3;i<=sqt;i+=2)
    {
        while(prime[i]==1)i+=2;
        j=i*(i-2);
        i2=i<<1;
        while((j=j+i2)<=len)
        {
            prime[j]=1;
        }
    }
    //for(i=8000;i<10000;i++)
    //if(!prime[i]) printf("%d\n",i);
}

int valid(int a)
{
    if(a>=10000 || a<1000 || visited[a]) return 0;
    if(prime[a]) return 0;
    return 1;
}

int bfs(int src,int dst)
{
    int i,j,k,x,p;
    memset(visited,0,sizeof(visited));
    //memset(ans,-1,sizeof(ans));
    queue<pii>q;
    q.push(pii(src,0));
    while(!q.empty())
    {
        pii a=q.front();
        j=a.F;
        k=a.S;
        visited[j]=1;
        //printf("%d ",j);
        q.pop();
        if(j==dst) return k;
        x=(j/10)*10;
        for(i=0;i<10;i++)
        {
            p=x+i;
            if(valid(p)) q.push(pii(p,k+1));
        }
        x=(j/100)*100+j%10;
        for(i=0;i<10;i++)
        {
            p=x+i*10;
            if(valid(p)) q.push(pii(p,k+1));
        }
        x=(j/1000)*1000+j%100;
        for(i=0;i<10;i++)
        {
            p=x+i*100;
            if(valid(p)) q.push(pii(p,k+1));
        }
        x=j%1000;
        for(i=1;i<10;i++)
        {
            p=x+i*1000;
            if(valid(p)) q.push(pii(p,k+1));
        }
        //printf("loop\n");
    }
    return -1;
}

int main()
{
    int t,a,b,x;
    precompute();
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&a,&b);
        x=bfs(a,b);
        if(x==-1) printf("impossible\n");
        else printf("%d\n",x);
    }
    return 0;
}
