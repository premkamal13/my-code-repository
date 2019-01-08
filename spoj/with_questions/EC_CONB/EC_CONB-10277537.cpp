#include<cstdio>
#include<cstdlib>
#include<stack>
using namespace std;

void rev(int n)
{
    stack<int>s;
    while(n)
    {
        int rem=n%2;
        n>>=1;
        s.push(rem);
    }
    int val=0,pw2=1;
    while(!s.empty())
    {
        val=val+s.top()*pw2;
        pw2<<=1;
        s.pop();
    }
    printf("%d\n",val);
}

int main()
{
    int n,x;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&x);
        if(x&1) printf("%d\n",x);
        else rev(x);
    }
    return 0;
}
