#include<cstdio>
#include<cstdlib>
#include<queue>
#include<stack>
#include<vector>
using namespace std;

queue<int>q;
stack<int>s;

void fill(int n)
{
    q.push(n);
    if(q.size()>s.size())
    {
        int x=q.front();
        q.pop();
        s.push(x);
    }
}

void delet()
{
    s.pop();
    if(q.size()>s.size())
    {
        int x=q.front();
        q.pop();
        s.push(x);
    }
}

int  main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
        {
            printf("\n");
            while(!q.empty())q.pop();
            while(!s.empty())s.pop();
        }
        else if(n==-1)
        {
            printf("%d\n",s.top());
            delet();
        }
        else fill(n);
    }
    return 0;
}
