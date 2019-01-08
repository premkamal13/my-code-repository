#include<stdio.h>
#include<stdlib.h>

int a[1000012];

int main()
{
    int i,j,k,l,n,x,err;
    scanf("%d %d %d",&k,&l,&n);
    for(i=1;i<1000011;i++) a[i]=0;
    //for(i=1;i<=20;i++) printf("%d ",a[i]);
   // printf("\n");
    a[k]=a[l]=a[1]=1;
    a[0]=0;
    //for(i=1;i<=1000011;i++) printf("%d ",a[i]);
    //printf("\n");
    for(j=2;j<1000001;j++)
    {
        //printf(">>%d\n",a[j]);
      if(a[j]) err=1;
      else if(a[j-1]==1)
        {
            err=0;
            if(!err && j>k)
            {
                if(a[j-k]==1) err=0; else err=1;
            }
            if(!err && j>l)
            {
                if(a[j-l]==1) err=0; else err=1;
            }
        }
        else err=1;
        if(err) a[j]=1;
        else a[j]=0;
      }
    //for(i=1;i<=113;i++) printf("%d ",a[i]);
    //printf("\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        if(a[x]==1) printf("A");
        else printf("B");
    }
    printf("\n");
    return 0;
}
