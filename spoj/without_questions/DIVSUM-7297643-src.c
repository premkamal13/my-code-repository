#include<math.h>
#include<stdio.h>
int main()
{
    long int i,s;
    long int t,n,sum,a;
    scanf("%ld",&t);
    while(t>0)
    {
                     scanf("%ld",&n);
                      sum=1;
                      i=2;
                      a=1;
                      s=(long int)sqrt(n);
                     while(i<=s)
                      {                                                   
                            if(n%i==0){ sum+=i+(n/i); a=i; }
                            i++;
                      }
                      if(a==(n/a))sum-=a;                         
                      printf("%ld\n",sum);
                      t--;
    }
  return 0;
}                      

