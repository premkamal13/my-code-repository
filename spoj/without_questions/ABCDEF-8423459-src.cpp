#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;
int b[101];
int a[2000001];
int main()
{
  int i,j,k,n,c,m,l=0;
  scanf("%d",&n);
  for(i=0;i<n;i++) scanf("%d",&b[i]);
  for(i=0;i<n;i++)
  if(b[i])
  {
      for(j=0;j<n;j++)
      {
          for(k=0;k<n;k++)
          {
              a[l++]=b[i]*b[j]+b[i]*b[k];
          }
      }
  }
  sort(a,a+l);
  c=0;
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
      {
          for(k=0;k<n;k++)
          {
              m= b[i]*b[j]+b[k];
              c= c + upper_bound(a,a+l,m)-lower_bound(a,a+l,m);//(a.upper_bound(m) - a.lower_bound(m));
          }
      }
  }
  printf("%d\n",c);
  return 0;
}
