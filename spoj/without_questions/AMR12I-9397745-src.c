#include<stdio.h>
#include<stdlib.h>
#define inf 100000001

int min(int x,int y)
{
    return(x<y?x:y);
}

char s[20001];
int main()
{
    int t,k,i,j,sm,f,n,c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&k);
        scanf("%s",s);
        f=0;
        if(k<=n)
        {
            sm=0;
            for(i=0;i<n;)
            {
                j=i+1;c=0;
                while(j<n && j<i+k && s[j]==s[i]) {j++;c++;}
                i=j;
                if(c==k-1) f=1;
                sm+=c;
            }
        }
        if(!f) printf("-1\n");
        else printf("%d\n",n-sm);
    }
    return 0;
}
