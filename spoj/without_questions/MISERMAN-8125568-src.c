#include<stdio.h>
#include<stdlib.h>

int a[102][102];

int min(int x,int y,int z)
{
if(x<y)
{
    if(x<z)return x;
    else return z;
}
else {
       if(y<z) return y;
       else return z;
     }
}
int main()
{
int i,j,n,minval,m;
scanf("%d %d",&n,&m);
//for(i=0;i<m;i++) a[i][0]=0;
for(j=0;j<n;j++) a[j][0]=10000;
for(j=0;j<n;j++) a[j][m+1]=10000;
for(i=1;i<=n;i++)
{
    for(j=1;j<=m;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
/*printf("\n\n");
for(i=1;i<=n;i++)
{
    for(j=1;j<=m;j++)
    {
        printf("%d ",a[i][j]);
    }
printf("\n");
}*/
for(i=2;i<=n;i++)
{
    for(j=1;j<=m;j++)
    {
        a[i][j]+= min(a[i-1][j-1],a[i-1][j+1],a[i-1][j]);
    }
}
/*printf("\n\n");
for(i=1;i<=n;i++)
{
    for(j=1;j<=m;j++)
    {
        printf("%d ",a[i][j]);
    }
printf("\n");
}*/
minval=a[n][1];
for(j=2;j<=m;j++)
{
if(a[n][j]<minval) minval=a[n][j];
}
printf("%d\n",minval);
return 0;
}
