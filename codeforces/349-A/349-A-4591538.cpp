#include<cstdio>
#include<cstdlib>

int a[100001];
int main()
{
    int n,i,n25,n50,n100,err,x;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    n25=n50=n100=err=0;
    for(i=0;i<n;i++)
    {
        x=a[i];
        if(x==25) n25++;
        else if(x==50)
        {
            if(n25>0)
            {
                n50++;
                n25--;
            }
            else {err=1; break;}
        }
        else
        {
            if(n25 && n50)
            {
                n100++;
                n50--;
                n25--;
            }
            else if(n25>2)
            {
                n100++;
                n25-=3;
            }
            else {err=1; break;}
        }
    }
    if(err) printf("NO\n");
    else printf("YES\n");
    return 0;
}