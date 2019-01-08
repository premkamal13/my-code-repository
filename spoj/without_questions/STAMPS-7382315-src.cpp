#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;
int main()
{
long long int t,h,s;
int n,i,k=1,c;
scanf("%lld",&t);
while(t--)
{
 scanf("%lld %d",&s,&n); i=0;
 int a[n];
 while(n--) {scanf("%d",&a[i++]);}
 sort(a,a+i);
 h=0;
 c=0;i--;
 while((h<s)&&(i>=0))
 {
 h+=a[i--]; c++;
 }
 printf("Scenario #%d:\n",k++);
  if(h<s) printf("impossible\n");
 else printf("%d\n",c);
 printf("\n");
} 
return 0;  
}


