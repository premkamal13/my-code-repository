#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main()
{
  int num,m,i,x,k,n;
  char a[50];
    while(scanf("%d",&n),n!=0)
    {
                            gets(a);
                             num=0;
                             
                             if(n==1) k=1;
                             else if(n==2) k=20;
                             else k=360;
                             m=n;
                             while(m>3) {k*=20;m--;}
                             //printf("%d\n",k);
                             while(n>3)
                             {
                                      
                                       gets(a);
                                       x=strlen(a);
                                       m=0;
                                       for(i=0;i<x;i++)
                                       {
                                                  if(a[i]=='.') m++;
                                                  else if(a[i]=='-') m+=5;
                                                  else if (a[i]=='S') m=0;
                                       }
                                       num+=m*k;
                                       k/=20;
                                       n--;
                                       //printf("%d\n",num);
                             }
                             
                             
                              if(n==3)
                             {
                                      
                                       gets(a);
                                       x=strlen(a);
                                       m=0;
                                       for(i=0;i<x;i++)
                                       {
                                                  if(a[i]=='.') m++;
                                                  else if(a[i]=='-') m+=5;
                                                  else if (a[i]=='S') m=0;
                                       }
                                       num+=m*360;
                                       n--;
                              //printf("%d\n",num); 
                              }
                                
                               
                             if(n==2)
                             {
                                    
                                       gets(a);
                                       
                                       x=strlen(a);
                                       m=0;
                                       for(i=0;i<x;i++)
                                       {
                                                  if(a[i]=='.') m++;
                                                  else if(a[i]=='-') m+=5;
                                                  else if (a[i]=='S') m=0;
                                       }
                                       num+=m*20;
                             n--;
                             //printf("%d\n",num);
                             } 
                             if(n==1)
                             {
                                      
                                        gets(a);
                                       
                                       x=strlen(a);
                                       m=0;
                                       for(i=0;i<x;i++)
                                       {
                                                  if(a[i]=='.') m++;
                                                  else if(a[i]=='-') m+=5;
                                                  else if (a[i]=='S') m=0;
                                       }
                                       num+=m;
                                       n--;
                             }                            
       printf("%d\n",num);
      }
return 0;
    }
