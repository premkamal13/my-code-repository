#include<string.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{char a[15],b[15],c;int m,n,r,i,x,y,j;
 while(scanf("%s %s %c",a,b,&c)!=EOF)
 { x=strlen(a);y=strlen(b);m=0;
for(i=0;i<x;i++){
       if(a[i]=='I') {if(a[i+1]=='V'){m-=1;} else if(a[i+1]=='X'){m-=1;} else m+=1;}
       else if(a[i]=='V') m+=5;            
       else if(a[i]=='X') { if(a[i+1]=='L'){m-=10;} else if(a[i+1]=='C'){m-=10;} else m+=10;} 
       else if(a[i]=='L') m+=50; 
       else if(a[i]=='C') {if(a[i+1]=='D'){m-=100;} else if(a[i+1]=='M'){m-=100;} else m+=100;} 
       else if(a[i]=='D') m+=500; 
       else if(a[i]=='M') m+=1000; 
       }n=0;
for(i=0;i<y;i++){
       if(b[i]=='I'){if(b[i+1]=='V'){n-=1;} else if(b[i+1]=='X'){n-=1;} else n+=1;}
       else if(b[i]=='V') n+=5;            
       else if(b[i]=='X'){ if(b[i+1]=='L'){n-=10;} else if(b[i+1]=='C'){n-=10;} else n+=10;}
       else if(b[i]=='L') n+=50; 
       else if(b[i]=='C') {if(b[i+1]=='D'){n-=100;} else if(b[i+1]=='M'){n-=100;} else n+=100;} 
       else if(b[i]=='D') n+=500; 
       else if(b[i]=='M') n+=1000; 
       }
      if(c=='+') r=m+n;
      else if(c=='-') r=m-n;
      else if(c=='*') r=m*n;
      else if(c=='%') r=m%n;
      else if(c=='/') r=m/n; i=0;
     while(r!=0)
     {
     if(r>=1000){r-=1000;a[i]='M';}
     else if(r>=900) {r-=900;a[i]='C';a[i+1]='M';i++;} 
     else if(r>=500){r-=500;a[i]='D';}
     else if(r>=400){r-=400;a[i]='C';a[i+1]='D';i++;}
     else if(r>=100){r-=100;a[i]='C';}
     else if(r>=90){r-=90;a[i]='X';a[i+1]='C';i++;}
     else if(r>=50){r-=50;a[i]='L';}
     else if(r>=40){r-=40;a[i]='X';a[i+1]='L';i++;}
     else if(r>=10){r-=10;a[i]='X';}
     else if(r>=9){r-=9;a[i]='I';a[i+1]='X';i++;}
     else if(r>=5){r-=5;a[i]='V';}
     else if(r>=4){r-=4;a[i]='I';a[i+1]='V';i++;}
     else if(r>=1){r-=1;a[i]='I';}
     i++;
     }for(j=0;j<i;j++) printf("%c",a[j]);printf("\n");}return 0;            
}
