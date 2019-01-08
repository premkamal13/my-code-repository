#include<stdio.h>

int main()
{
    long long int n,x1,x2,y1,y2,ax,bx,ay,by,i,j,c,m,t,g;
    
    scanf("%lld",&g);
    while(g--)
    {
              scanf("%lld %lld %lld %lld",&x1,&y1,&x2,&y2);
              t=x2-x1;
              m=y2-y1;
              n=x2*y1-x1*y2;
              if(x1<x2){ax=x1;bx=x2;}
              else { ax=x2; bx=x1;}
              if(y1<y2) {ay=y1; by=y2;}
              else { ay=y2; by=y1;}
              c=0;
              if(t==0) 
              {
                       c=y2>y1?y2-y1:y1-y2;
                       c+=1;
              }
              else if(m==0)
              {
                       c=x2>x1?x2-x1:x1-x2;
                       c+=1;
              }
              else
              {
                 for(i=ax;i<=bx;i++)
                  {  
                     if((n+m*i)%t==0) c++;
                  }
              }
    printf("%lld\n",c);
    }
return 0;
}
