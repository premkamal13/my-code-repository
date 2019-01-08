#include<cstdio>
#include<iostream>
#include<algorithm>

using namespace std;
 int a[100005];
 int binsearch(int arr[],int, long int, long int);

int main()
{
 int t,s,c,x;long int n,i,count;
scanf("%d",&t);
while(t--)
{
  scanf("%ld %d",&n,&s);
  for(i=0;i<n;i++) scanf("%d",&a[i]);
  sort(a,a+n);
  count=0;
  for(i=0;i<n;i++)
  { c=0;
                  x=s-a[i];
                 c= binsearch(a,x,i+1,n-1);
                 if(c==1) count+=1;
  }
  printf("%ld\n",count);
}   
return 0;
}

int binsearch(int arr[],int key,long int beg,long int end)
    {  long int mid;
       if(beg>end) return 0;
       else {
              mid=(beg+end)>>1;
              if(key==a[mid]) return 1;
              else if(key<a[mid]) {return binsearch(arr,key,beg,mid-1);}
              else {return binsearch(arr,key,mid+1,end);}
            }
    }
            

    
    
