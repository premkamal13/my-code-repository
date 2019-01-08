#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;

inline void fastread(int *a)
{
 register char c=0;
 while (c<33) c=getchar();
 *a=0;
 while (c>33)
 {
     *a=*a*10+c-'0';
     c=getchar();
 }
}

int main()
{
    int t,n,cnt,x;
    scanf("%d%d",&n,&t);
    cnt=0;
    while(n--)
    {
        fastread(&x);
        if(!(x%t)) cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}
