#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
   char a[9],b[8];
   int k,i=0;
   while(scanf("%s %s",a,b)!=EOF)
   {
     k=0;i++;
    if((a[0]=='A')&&(a[1]=='b')){a[0]='G'; a[1]='#';}
    else if((a[0]=='G')&&(a[1]=='#')) {a[0]='A'; a[1]='b';}
    else if(a[1]=='#')
      {
      a[0]++;
      a[1]='b';
      }
    else if(a[1]=='b')
     {
     a[0]--;
     a[1]='#';
     }
    else k=1;
   if(k==1) printf("Case %d: UNIQUE\n",i);
   else printf("Case %d: %s %s\n",i,a,b);
   }
   return 0;
}
