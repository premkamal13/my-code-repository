#include<stdio.h>
#include<string.h>
int main()
{
    char ab[16]="0123456789ABCDEF";
    int a,b,l,r,i;
    char c[32];
    long long int x,p;
    while(scanf("%s %d %d",c,&a,&b)!=EOF)
    {          x=0;
              l=strlen(c);
              p=1;
              --l;
              if(c[l]>=48 && c[l]<=57)x+=(c[l]-48);
              else x+=(c[l]-55);
              --l;
              while(l>=0)
              {
                  p*=(long long int)a;
                  if(c[l]==' ')continue;
                  else if(c[l]>=48 && c[l]<=57) x+=((c[l]-48)*p);
                  else x+=((c[l]-55)*p);
                  l--;
              }
              memset(c,0,32);
              l=0;
              while(x>0)
              {
                 r=x%b;       
               c[l]=ab[r];
               l++;
               x/=b;
               }
              l=strlen(c);
              if(l>7)printf("ERROR\n");
              else{
                   i=0;
                   while(i<(7-l)){printf(" "); i++;}
                    i=l-1;
                   while(i>=0){printf("%c",c[i]); i--;}
           
                   printf("\n");
                   }
    }    
 return 0;
}                      



