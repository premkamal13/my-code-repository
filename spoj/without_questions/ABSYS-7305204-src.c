#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char c[200];
    int t,l,i,b;
    int a[3]={0,0,0};    
     scanf("%d",&t);
    gets(c);
    while(t>0)
    {
              gets(c);
              gets(c);
              l=strlen(c);
              i=0;
              b=0;
              while(i<l)
              {
                        if(c[i]=='+' || c[i]=='='){ b++; if(a[0]!=0 && a[1]!=0)break; }                                            
                        if(isdigit(c[i])) a[b]=(a[b]*10)+(c[i]-48);
                        if(c[i]=='m'){ a[b]=0; i=i+6; while(c[i+1]!='+' && c[i+1]!='=')i++; }
                        i++;
              }
              if(i<l)a[2]=a[1]+a[0];
              else if(a[0]!=0 && a[2]!=0)a[1]=a[2]-a[0];
              else a[0]=a[2]-a[1];
              printf("%d + %d = %d\n",a[0],a[1],a[2]);
              a[0]=0; a[1]=0; a[2]=0;
          t--;
    }
 return 0;
}                                  
