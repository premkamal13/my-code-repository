#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<algorithm>
using namespace std;

//int hash[2000001];
int a[1000001];
int main()
{
    int i,t,j,n;
    scanf("%d",&t);
    while(t--)
    {
        //memset(hash,0,sizeof(hash));
        scanf("%d",&n);
        for(i=0;i<n;i++) {scanf("%d",&a[i]);}
        sort(a,a+i);
        int cnt=0;
        for(i=0;i<n;i++)
        {
            if(a[i])
            {
                int srch=a[i]<<1;
                for(j=i+1;j<n;j++)
                {
                    if(a[j]==srch) {cnt++; a[j]=0;break;}
                    else if(a[j]>srch)break;
                }
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}
