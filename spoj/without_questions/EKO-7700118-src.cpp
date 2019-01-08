#include<cstdio>
#include<algorithm>
#include<iostream>

using namespace std;
long long a[1000002];
int main()
{
   long long int s=0,i,sum,n,j=1,k=1,m,c=0;
   scanf("%lld %lld",&n,&sum);
   for(i=0;i<n;i++) scanf("%lld",&a[i]); 
    sort(a,a+i);
    for(i=i-1;i>0;i--)
    {m=a[i]-a[i-1];
     while(m--){s+=j; c++;if(s>=sum) break;}
     j++;k=1;
     if(s>=sum) break;
    }
    //if(s<sum) c++;
    printf("%lld\n",a[n-1]-c);
   //scanf("%*d");
   return 0;
}
