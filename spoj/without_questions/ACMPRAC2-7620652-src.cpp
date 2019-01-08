#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cstring>
using namespace std;

#include<stdlib.h>

int main()
{
char a[100004],c;
int b[100000],s,i,t,j,count,n,x,z;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
scanf("%s",a);
x=strlen(a);
j=0;
for(i=0;i<x;)
{
count=1;
c=a[i];
i++;
while((a[i]==c)&&(i<x)){count++;i++;}
b[j++]=count;
}         
sort(b,b+j);
j--;
z=0;s=0;
while((z<n)&&(j>-1))
{s+=b[j--];
z++;}
printf("%d\n",s);
}
return 0;
}
