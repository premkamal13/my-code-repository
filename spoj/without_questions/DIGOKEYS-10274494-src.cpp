#include<cstdio>
#include<cstdlib>
#include<vector>
#include<stack>
#include<algorithm>
#include<cstring>
#include<map>
#include<queue>
using namespace std;

int visited[100001],prev[100001];
vector<int> v[100001];
int ans,n;

void traverse(int i)
{
    queue<int>q;
    q.push(i);
    while(!q.empty())
    {
        int i=q.front();
        q.pop();
        if(i==n) return;
        vector<int>::iterator it;
        for(it=v[i].begin();it!=v[i].end();it++)
        {
//        printf("%d\n",(*it));
            if(!visited[(*it)])
            {
                int v=(*it);
                visited[v]=visited[i]+1;
                prev[v]=i;
                q.push(v);
            }
        }
    }
}

int main()
{
    int t,f,cnt,i,x;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++) v[i].clear();
        f=0;
        for(i=1;i<n;i++)
        {
            scanf("%d",&cnt);
            int cn=cnt;
            while(cnt--)
            {
                scanf("%d",&x);
                if(x==n) f=1;
                v[i].push_back(x);
            }
            sort(v[i].begin(),v[i].end());
        }
        if(f)
        {
            memset(visited,0,sizeof(visited));
            visited[1]=1;
            traverse(1);
            if(visited[n])
            {
                int val=visited[n]-1;
                printf("%d\n",visited[n]-1);
                int j=n;
                stack<int> s;
                while(j!=1)
                {
                    s.push(j);
                    j=prev[j];
                }
                s.push(1);
                val--;
                printf("%d",s.top());
                s.pop();
                while(val--)
                {
                    printf(" %d",s.top());
                    s.pop();
                }
                printf("\n");
            }
            else printf("-1\n");
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}
