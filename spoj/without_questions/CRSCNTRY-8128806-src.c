#include<stdio.h>
#include<stdlib.h>

int l[1001][1001],a[1002],b[1002];

int max(int a,int b)
{
    if(a>b) return a;
    else return b;
}

int lcs(int x,int y)
{int i,j;
  for(i=1;i<=x;i++) l[i][0]=0;
  for(j=1;j<=y;j++) l[0][j]=0;
  for(i=1;i<=x;i++)
  {
      for(j=1;j<=y;j++)
      {
          if(a[i]==b[j]) l[i][j]=l[i-1][j-1]+1;
          else l[i][j]=max(l[i-1][j],l[i][j-1]);
      }
  }
 return l[x][y];
}
int main()
{
    int t,i,j,max,v;
    scanf("%d",&t);
    while(t--){i=1;
               max=0;
                scanf("%d",&a[1]);
                while(a[i]!=0){
                                i++;
                                scanf("%d",&a[i]);
                              }
                              i--;
                while(scanf("%d",&b[1]),b[1]!=0)
                {
                 j=1;
                    while(b[j]!=0)
                    {
                        j++;
                        scanf("%d",&b[j]);
                    }
                 j--;
                 v=lcs(i,j);
                 //printf("(%d)",v);
                 if(v>max) max=v;
                }
                printf("%d\n",max);
              }
return 0;
}
