#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<stack>
using namespace std;
char s[101];
int ans[101];

int main()
{
    int n,i,j;
    while(1)
    {
        scanf("%s",s);
        if(s[0]=='-') break;
        if(s[0]=='0') printf("0\n");
        else
        {
            int x=strlen(s);
            i=0,j=0;
            int val=0;
            while(i<x)
            {
                val=val*10+s[i++]-48;
                int tmp=val/9;
                ans[j++]=tmp;
                val=val%9;
            }
            //printf("");
            int carry;
            stack<int>ss;
            if(val) carry=1;
            else carry=0;
            int i=j-1;
            while(i>=0)
            {
                val=ans[i]+carry;
                carry=0;
                if(val>=10) {val-=10; carry=1;}
                ss.push(val);
                i--;
            }
            if(carry) ss.push(carry);
            while(!ss.empty())
            {
                if(ss.top()==0) ss.pop();
                else break;
            }
            while(!ss.empty())
            {
                printf("%d",ss.top());
                ss.pop();
            }
            printf("\n");
        }
    }
    return 0;
}
