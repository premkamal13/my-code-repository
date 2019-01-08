#include<stdio.h>
int z;

int rat(int x,int y)
{
    z=x/y;
   // printf("\n\t%d\n",z);
    if(x%y!=0) z++;
    return z;
}

int main()
{  int e,f,s,m,e1,f1,m1,s1,e2,f2,s2,m2,e3,f3,s3,m3,e4,f4,s4,m4,max1,max2,max;
    while(scanf("%d %d %d %d %d %d %d %d",&e,&f,&s,&m,&e1,&f1,&s1,&m1),e!=-1)
    {
     if((e==0)&&(f==0)&&(s==0)&&(m==0)) {e4=e;f4=f;m4=m;s4=s;}
     else {
                    e2=rat(e,e1);
                    f2=rat(f,f1);
                    s2=rat(s,s1);
                    m2=rat(m,m1);
                    //printf("%d %d %d %d\n",e2,f2,s2,m2);
                    max1=e2>f2?e2:f2;
                    max2=s2>m2?s2:m2;
                    max=max1>max2?max1:max2;
         e3=max*e1;
         f3=max*f1;
         s3=max*s1;
         m3=max*m1;
         //printf("%d %d %d %d\n",e3,f3,s3,m3);
              e4=e3-e;
              f4=f3-f;
              s4=s3-s;
              m4=m3-m;
           }   printf("%d %d %d %d\n",e4,f4,s4,m4);
                    }
    return 0;
    }
