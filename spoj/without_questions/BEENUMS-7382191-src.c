#include<stdio.h>
#include<math.h>

int main()
    {
       long long int a,k,f;
       int s;
       while(scanf("%lld",&a),a!=-1)
       {
          s=0;
          if((a-1)%3==0)
          {
           k=1+4*(a-1)/3; f=sqrt(k); 
           if((f*f==k)&&((f-1)%2==0)) s=1;           
           }
           else s=0;
        if(s==1) printf("Y\n");
        else printf("N\n");                      
       }
       return 0;
    }