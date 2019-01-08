#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
using namespace std;

char a[1000001];

int main()
{
    int f,i,j,cnt,maxm,pos,n;
    scanf("%d %s",&n,a);
    cnt=maxm=pos=0;
    f=0;
    cnt=0;
    for(i=n-1;i>=0;)
    {
        if(f && a[i]=='B') ;
        else if(!f && a[i]=='A') ;
        else
        {
            if(i<1 || a[i-1]!=a[i]) i--;
            else {f=1-f;}
            cnt++;
        }
        i--;
    }
    printf("%d\n",cnt);
    return 0;
}
