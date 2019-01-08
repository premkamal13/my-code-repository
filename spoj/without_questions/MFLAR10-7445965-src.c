#include<stdio.h>
#include<string.h>

int main()
{
 char a[10001],f,g;
 int x,k,i;
 while(gets(a),a[0]!='*')
 {
   x=strlen(a);
   f=a[0];
   if(f<91)g=a[0]+32; else g=a[0]-32;k=1;i=0;
   while(++i<x)
            { 
                      if(a[i] == 32) {if((a[i+1]==f)||(a[i+1]==g))k=1;
                                          else {k=0;break;}
                                      } if(k==0) break;
            }
    if(k==0) printf("N\n");
    else printf("Y\n");
 }    
 return 0;
}

