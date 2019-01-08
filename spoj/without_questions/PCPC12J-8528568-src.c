#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int max,i,sq,j,n,pos;
int f[101],a[10001],lucky[101];

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        for(i=1;i<101;i++) f[i]=0;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
            f[a[i]]++;
        }
        max=-1;
        pos=-1;
        for(i=1;i<=100;i++)
        {
            if(f[i]&&(f[i]%i==0)&&(f[i]>max)) {max=f[i];pos=i;}
        }
        printf("%d\n",pos);
    }
    return 0;
}
