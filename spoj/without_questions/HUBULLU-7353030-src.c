#include<stdio.h>

int main()
     {
          long long int a;
          int b,t;
       scanf("%d",&t);
       while(t--)
                 {
                      scanf("%lld %d",&a,&b);
                      if(b) printf("Pagfloyd wins.\n");
                      else printf("Airborne wins.\n");
                 }
return 0;
}
