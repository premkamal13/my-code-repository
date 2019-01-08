#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<algorithm>
#include<cstring>
char s[21][21];
using namespace std;
int main()
{
    int r,c,i,j,p,err,cnt;
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++) scanf("%s",s[i]);
    //memset(dp,sizeof(dp));
    cnt=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(s[i][j]!='S')
            {
                err=0;
                for(p=0;p<r;p++)
                {
                    if(s[p][j]=='S'){err++; break;}
                }
                for(p=0;p<c;p++)
                {
                    if(s[i][p]=='S'){err++; break;}
                }
                if(err<2) cnt++;
            }
        }
    }
    printf("%d\n",cnt);
    return 0;
}