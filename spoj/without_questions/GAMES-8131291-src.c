#include<stdio.h>
#include<stdlib.h>
#include<string.h>

long long int ar[10010];
long long int r,val;
double e,n;
char a[30];
long long int m,t,j,c,i;
long long int k;
int x,rem;
long long int hcf1(long long int,long long int);
void fill1(long long int);

int main()
{

              c=1;
              ar[0]=1;
              for(i=1;i<10000;i++)
              {
                  if(10000%i==0)
                  ar[i]=10000/i;
                  else
                       {
                         fill1(i);
                       }
              }
    scanf("%d",&t);
    while(t--)
    {
              scanf("%s",a);
              x=strlen(a);
              if(a[0]==48&&x==1) printf("0\n");
              else
              {

              for(i=0;i<x;i++)
              {
                  if(a[i]=='.') break;
              }
              rem=0;
              val=0;
              for(i+=1;i<x;i++)
              {
                  val=val*10+a[i]-48;
                  rem++;
              }
              if(rem==1) val*=1000;
              else if(rem==2) val*=100;
              else if(rem==3) val*=10;
              if(val==0) printf("1\n");
              else
              {
              printf("%lld\n",ar[val]);
              }
              }
    }
return 0;
}

long long int hcf1(long long int a,long long int b)
{
if(a%b==0) return b;
else return hcf1(b,a%b);
}

void fill1(long long int n)
{
  int val,x;
  x=hcf1(10000,n);
  val=10000/x;
  ar[n]=val;
}
