#include<cstdio>
#include<cstdlib>
#include<cmath>
#define abs(a) (a<0?-a:a)

int a[101];

int main()
{
    int tst=1,i,n;
    while(scanf("%d",&n),n)
    {
        int sum=0;
        for(i=0;i<n;i++) {scanf("%d",&a[i]); sum+=a[i];}
        int val=sum/n,cnt=0;
        for(i=0;i<n;i++)
        {
            int dif=a[i]-val;
            if(dif<0) dif=-dif;
            cnt+=dif;
        }
        printf("Set #%d\n",tst++);
        printf("The minimum number of moves is %d.\n",cnt>>1);
    }
    return 0;
}