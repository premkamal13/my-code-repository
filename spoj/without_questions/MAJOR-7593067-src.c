#include<stdio.h>

int main()
{
int t,n,i,j,c,a[100000],p;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
for(i=1;i<=100000;i++) a[i]=0;             
for(i=0;i<n;i++){scanf("%d",&c); c+=1001; a[c]++;}
for(i=1;i<2000;i++){if(a[i]>n/2){p=i-1001;break;}else p=-2000;}
if(p==-2000)printf("NO\n");
else printf("YES %d\n",p);
}
return 0;
}
