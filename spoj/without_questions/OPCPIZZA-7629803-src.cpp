#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;
int a[100000];
int binsearch(int a[],int,int, int);

int main()
{
int i,t,n,c,s,x;
scanf("%d",&t);
while(t--)
{
  scanf("%d %d",&n,&s);
  for(i=0;i<n;i++) scanf("%d",&a[i]);
  sort(a,a+i);
  c=0;
  for(i=0;i<n;i++)
  {
                  x=s-a[i];                
                 c+= binsearch(a,x,i+1,n-1);
  }
  printf("%d\n",c);
}   
return 0;
}

int binsearch(int a[],int key,int beg, int end)
    { int mid;
       if(beg>end) return 0;
       else {
              mid=(beg+end)/2;
              if(key==a[mid]) return 1;
              else if(key<a[mid]) {return binsearch(a,key,beg,mid-1);}
              else {return binsearch(a,key,mid+1,end);}
            }
    }
            

    
    
