#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char a[109],b[109];
    int i,j,k,p,x,s,l;
    while(scanf("%s",a)!=EOF)
      { 
         p=0;i=0;j=0;k=0,s=2;
         x=strlen(a);
         if((a[0]==95)||(a[0]<91)){p=1;}
         else
         {
             for(i=0;i<x;i++)
         {
           while(a[i]>96) b[j++]=a[i++];
           if(a[i]==95) { k=1;
                        i++;
                        if(a[i]<97) {p=1; break;}
                        else {a[i]-=32; b[j++]=a[i];}
                        }
           else if((a[i]>64)&&(a[i]<91)){
                  if(a[i]>97) {p=1;break;}
                  else
                  {s=1;
                      a[i]+=32;
                      b[j++]=95;
                      b[j++]=a[i];
                  }
                  }
          }
          }
         if((p==1)||(s==k)) printf("Error!\n");
         else { for(l=0;l<j;l++) printf("%c",b[l]); printf("\n");}                   
      }
     return 0;
      }
