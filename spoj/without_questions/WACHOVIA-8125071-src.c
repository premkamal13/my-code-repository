#include<stdio.h>
#include<stdlib.h>
int b[51],a[51],ben[55][1002];

int max(int a,int b)
{
if(a>b) return a;
else return b;
}

int main()
{
int m,k,i,t,w;
scanf("%d",&t);
while(t--)
   {
       scanf("%d %d",&k,&m);//m is number of boxes
       for(i=1;i<=m;i++)
       {
          scanf("%d %d",&a[i],&b[i]);
       }
       for(i=0;i<=m;i++) ben[i][0]=0;
       for(w=0;w<=k;w++) ben[0][w]=0;
       for(i=1;i<=m;i++)
       {
         for(w=1;w<=k;w++)
         {
           if(a[i]>w) ben[i][w]=ben[i-1][w];
           else ben[i][w]=max(ben[i-1][w],ben[i-1][w-a[i]]+b[i]);
         }
       }
       /*for(i=1;i<=m;i++)
       {
           for(w=1;w<=k;w++)
           {
               printf("%d ",ben[i][w]);
           }
           printf("\n");
       }*/
   printf("Hey stupid robber, you can get %d.\n",ben[m][k]);
   }
 return 0;
}