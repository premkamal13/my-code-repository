#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
char s[250];
int div[10];
int c,i,n,j,r;
while(scanf("%s",&s)!=EOF)
           {
                  n=strlen(s);
                  div[0]=0;div[1]=1;
                  for(i=2;i<10;i++)
                  {
                     r=0;
                     for(j=0;j<n;j++)
                     {
                        r=(r*10+s[j]-48)%i;
                     }
                     if(r) div[i]=0;
                     else div[i]=1;
                  }
                  c=0;
                  for(i=0;i<n;i++)
                  {
                     if(div[s[i]-48]==1) c++;
                  }
              printf("%d\n",c);
            }
return 0;
}
