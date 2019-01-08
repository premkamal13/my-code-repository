#include<stdio.h>

int main()
{
   int t,n,k,i,j,v,m;
   long long int d;
   scanf("%d",&t);
   while(t--)
             {
               scanf("%lld",&d);
               v=1+8*d;
               n=(sqrt(v)-1)/2;
               m=(sqrt(v)-1);
               k=d-((n+1)*n/2);
               j=n+1;
               for(i=1;i<k;i++,j--);
               if(k==0){ if(n%2==0) printf("TERM %lld IS %d/1\n",d,n);
                            else printf("TERM %lld IS 1/%d\n",d,n);
                          }
               else if(n%2!=0) printf("TERM %lld IS %d/%d\n",d,i,j);
               else printf("TERM %lld IS %d/%d\n",d,j,i);
             }
   return 0;
   
}
