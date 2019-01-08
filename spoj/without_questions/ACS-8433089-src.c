#include<stdio.h>
#include<stdlib.h>

int a[1236],b[5680];
int x1,y1;

void swap1(int m, int n)
{
   int temp;
   temp=a[m];
   a[m]=a[n];
   a[n]=temp;
}

void swap2(int m, int n)
{
   int temp;
   temp=b[m];
   b[m]=b[n];
   b[n]=temp;
}

int write(int m,int n)
{
    int p;
    p=(a[m]-1)*5678;
    p+=b[n];
    return p;
}

void find(int m)
{
   int x2,y2,i;
   x2=m%5678;
   y2=m/5678;
   if(x2==0) {x1=y2; y1=5678;}
   else {x1=y2+1; y1=m-y2*5678;}
   //x1=a[x1];
   //y1=b[y1];
   //printf("val in initial arr: (%d %d) ",x1,x2);

   for(i=1;i<1235;i++)
   {
       if(x1==a[i]) {x1=i; break;}
   }
   for(i=1;i<5679;i++)
   {
       if(y1==b[i]) {y1=i;break;}
       if(y1==b[i]) {y1=i;break;}
   }
}

int main()
{
    char ch[2];
    int x,y,i,p,m;
    for(i=1;i<1235;i++)
    {
        a[i]=i;
    }
    for(i=1;i<=5678;i++)
    {
        b[i]=i;
    }
    while(scanf("%s",ch)!=EOF)
    {
        switch(ch[0])
        {
            case 'R': scanf("%d %d",&x,&y);
                      swap1(x,y);
                      break;
            case 'C': scanf("%d %d",&x,&y);
                      swap2(x,y);
                      break;
            case 'Q': scanf("%d %d",&x,&y);
                      p=write(x,y);
                      printf("%d\n",p);
                      break;
            case 'W': scanf("%d",&m);
                      find(m);
                      printf("%d %d\n",x1,y1);
                      break;
        }
    }
    return 0;
}
