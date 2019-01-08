#include<stdio.h>
#include<math.h>

int main()
{
  int n, i,k;
  int x;
  scanf("%d",&n);
  i=1;
  k=0;
  while(i<=(int)sqrt(n))
      {
         k+=n/i-i+1;
         i++;
      }
  printf("%d\n",k);
return 0;
}

