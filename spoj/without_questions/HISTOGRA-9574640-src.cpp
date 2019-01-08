#include<cstdio>
#include<cstdlib>
#include<stack>
#define lli long long int
using namespace std;
lli a[100001];

lli max(lli x,lli y)
{
    return(x>y?x:y);
}

lli maxrect(int n)
{
   stack<lli>s;
   lli area,tp,ans=0;
   int i=0;
   while(i<n)
   {
       if(s.empty() || a[s.top()]<=a[i])
       {
           s.push(i++);
       }
       else
       {
           tp=s.top();
           s.pop();
           area= a[tp]*(s.empty()?i:i-s.top()-1);
           ans=max(ans,area);
       }
   }
    while(!s.empty())
    {
        tp=s.top();
        s.pop();
        area= a[tp]*(s.empty()?i:i-s.top()-1);
        ans=max(ans,area);
    }
   return ans;
}

int main()
{
    int i,n;
    while(scanf("%d",&n),n!=0)
    {
        for(i=0;i<n;i++) scanf("%lld",&a[i]);
        printf("%lld\n",maxrect(n));
    }
}
