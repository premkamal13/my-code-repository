#include<stdio.h>
#include<stdlib.h>

int a[1001][1001],s1[1001],s2[1001];

int main()
{
    int k=1,ans,i,j,n,s;
    while(scanf("%d",&n),n!=0)
    {
        s=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
                s+=a[i][j];
            }
        }
        for(i=0;i<n;i++)
        {
            s1[i]=0;
            for(j=0;j<n;j++) s1[i]+=a[i][j];
        }
        for(i=0;i<n;i++)
        {
            s2[i]=0;
            for(j=0;j<n;j++) s2[i]+=a[j][i];
        }
        ans=0;
        for(i=0;i<n;i++)
        {
            if(s1[i]>s2[i])
            ans+=s1[i]-s2[i];
        }
        printf("%d. %d %d\n",k++,s,ans);
    }
    return 0;
}
