#include<stdio.h>
#include<stdlib.h>

int a[102][102];

int max(int x,int y,int z)
{
if(x>y)
{
    if(x>z)return x;
    else return z;
}
else {
       if(y>z) return y;
       else return z;
     }
}
int main()
{
int i,j,n,maxval,m,t;
scanf("%d",&t);
while(t--)
{
scanf("%d %d",&n,&m);
for(j=0;j<n;j++) a[j][0]=0;
for(j=0;j<n;j++) a[j][m+1]=0;
for(i=1;i<=n;i++)
{
    for(j=1;j<=m;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
for(i=2;i<=n;i++)
{
    for(j=1;j<=m;j++)
    {
        a[i][j]+= max(a[i-1][j-1],a[i-1][j+1],a[i-1][j]);
    }
}
maxval=a[n][1];
for(j=2;j<=m;j++)
{
if(a[n][j]>maxval) maxval=a[n][j];
}
printf("%d\n",maxval);
}
return 0;
}
