#include<stdio.h>
#include<math.h>

int main()
{
int t,i;
while(scanf("%d",&t),t!=0)
{
  i=1;
  while(pow(2,i)<=t) i++;
  printf("%d\n",i-1);                        
}    
return 0;
}
