#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,l,f;
    long int a,b,c,s;
    char c1[125];
    scanf("%d",&t);
    gets(c1);
    while(t--)
    {
              gets(c1);
              i=0;
              a=0;
              b=0;
              c=0;
              s=0;
              f=0;
              l=strlen(c1);
              while(i<(l-1))
              {
                        if(c1[i]>=48 && c1[i]<=57){ s=(s*10L)+(long int)(c1[i++]-48); continue; }
                        if(c1[i]=='+'){f=1; i++; continue; }
                        if(c1[i]=='-'){f=-1; i++; continue; }
                        if(c1[i]=='x')
                        {
                                     if(c1[i+1]=='*'){ a=1; i+=3; continue; }
                                     else { b=f; f=0; i++; continue;}
                        }
                        else if(c1[i]=='*')
                        {  
                                     if(c1[i+2]=='*'){ a=s; s=0; i+=4; continue; }
                                     else { b=s*f; s=0; f=0; i+=2; continue; }
                        }
                        else if(c1[i]=='='){ c=s*f; f=0; i++;}
              }
              if((b*b)>(4L*a*c))printf("Distinct real roots.\n\n");
              else if((b*b)==(4L*a*c))printf("Equal roots.\n\n");
              else printf("Imaginary roots.\n\n");
    }
return 0;
} 
