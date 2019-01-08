#include<cstdio>
#include<algorithm>
#include<iostream>

using namespace std;
int a[1000000];
int main()
{
   int n,t,i;
   scanf("%d",&t);
     while(t--)
           {
              scanf("%d",&n);
              for(i=0;i<n;i++) scanf("%d",&a[i]);   
              if(next_permutation(a,a+n))
              {
                for(i=0;i<n;i++) printf("%d",a[i]);
                printf("\n"); 
              }
              else
              {
                  printf("-1\n");
              }
            }
return 0;   
}
