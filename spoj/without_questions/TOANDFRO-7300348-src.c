#include<stdio.h>
#include<string.h>
int main()
{
    char c[201];
    int n,a,i,j,l,f;
    while(scanf("%d",&n),n!=0)
    {
                              scanf("%s",c);
                              a=(2*n)-1;
                              l=strlen(c);
                              i=0;
                              while(i<n)
                              {
                                        j=i;
                                        f=0;
                                        while(j<l)
                                        {
                                                if(f==0){printf("%c",c[j]); j+=a-(2*i); f=1; }
                                                else  {printf("%c",c[j]); j+=(2*i)+1; f=0;}
                                        }
                                    i++;
                              }
                             printf("\n"); 
    }
 return 0;
}





