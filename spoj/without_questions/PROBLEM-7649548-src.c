#include<stdio.h>
int count(char);
int main()
{
int t,c,x,i;
char a[100000];    
scanf("%d",&t);
while(t--)
{
  scanf("%s",a);
  x=strlen(a);
  c=0;i=0;
  while(i<x)
  {
      c+=count(a[i]);
      i++;     
    }          
  printf("%d\n",c);
}    
return 0;
}

int count(char m)
{
  if(m=='0') return 1;
  else if(m=='6') return 1;    
  else if(m=='8') return 2;
  else if(m=='9') return 1;
  else return 0; 
}
