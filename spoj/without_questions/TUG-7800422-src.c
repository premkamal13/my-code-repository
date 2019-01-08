#include<stdio.h>

int a[100009],chk[1000000],numa[101],sum=0;
int func(int a[],int n)
{
    int i,j;
    
    chk[0]=1;
    for(i=1;i<=sum;i++) chk[i]=0;
    for(i=0;i<n;i++)
    {
        for(j=sum;j>=a[i];j--)
        {
           chk[j]+=chk[j-a[i]]; 
           if(chk[j]>1) return 1;                      
        }                
    }
    return 0;
}


int main()
{
    int i,m,t;
    scanf("%d",&t);
    while(t--)
    {
              scanf("%d",&m);
              int p=0;
              sum=0;
              for(i=0;i<=100;i++) numa[i]=0;
              for(i=0;i<m;i++)
              {
                  scanf("%d",&a[i]);
                  sum+=a[i];
                  numa[a[i]]++;
              }
              if(m>100) {p=1;}
              else {
                     for(i=0;i<=100;i++){if(numa[i]>100) p=1;}
                    }
      if(p!=1){p=func(a,m);}
      if(p==1) printf("YES\n");
      else printf("NO\n");
    } 
return 0;
}
