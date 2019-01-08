#include<stdio.h>
#include<stdlib.h>

//const int inf = 0x7f7f7f7f;
int inf=2147483647;
int a[100001][5];

int min(int x,int y)
{
    if(x<y) return x;
    else return y;

}

int main()
{
  int k=1,n,i,j;
  while(scanf("%d",&n),n!=0)
  {
    for(i=0;i<n;i++)
    {
        a[i][0]=a[i][4]=inf;
    }
    for(i=0;i<n;i++)
    {
       for(j=1;j<4;j++)
       {
           scanf("%d",&a[i][j]);
       }
    }
    a[0][1]=inf;
    a[0][3]+=a[0][2];
    for(i=1;i<n;i++)
    {
        for(j=1;j<4;j++)
        {
            a[i][j]+=min(min(a[i][j-1],a[i-1][j]),min(a[i-1][j-1],a[i-1][j+1]));
        }
    }
    /*for(i=0;i<n;i++)
    {
        for(j=0;j<=4;j++)
        {
            printf("(%d) ",a[i][j]);
        }
        printf("\n");
    }*/
    printf("%d. %d\n",k,a[n-1][2]);
    k++;
  }
  return 0;
}
