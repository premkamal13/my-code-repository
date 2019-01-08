#include<stdio.h>
#include<stdlib.h>

int arr[3005],a[34000];

int main()
{
    int c1=34000,c,k,i,n,m;
    for(i=0;i<c1;i++) a[i]=0;
    k=2;
    for(m=1;m<3001;m++)
    {
       while(a[k]) k++;
       arr[m]=k;
       c=0;
       for(i=k+1;i<c1;i++)
       {
           if(a[i]) continue;
           c++;
           if(c==k)
           {
               a[i]=1;
               c=0;
           }
       }
       k++;
    }
    while(scanf("%d",&n),n!=0)
    {
        printf("%d\n",arr[n]);
    }
    return 0;
}
