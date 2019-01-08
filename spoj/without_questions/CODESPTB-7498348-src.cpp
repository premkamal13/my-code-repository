#include<iostream>
using namespace std;

long long int inversion_count = 0;

void merge(long arr[], long p, long q, long r)
{
 long n1 = q-p+1;
 long n2 = r-q;
 long L[n1];
 long R[n2];

 for(long i=0;i<n1;i++)
 {
  L[i]=arr[p+i];
 }
 L[n1]=99999999;     

 for(long i=0;i<n2;i++)
 {
  R[i]=arr[q+1+i];
 }
 R[n2]=9999999;
     
 long i=0;
 long j=0;
 long k=p;

 while(k<=r)
 {
  if(L[i]<=R[j])
  {
   arr[k]=L[i];
   i++;
   k++;              
  }
 else if(L[i]>R[j])
 {
  arr[k]=R[j];
  j++;
  k++;
  inversion_count+=n1-i;             
 }
}
}

void merge_sort(long arr[], long p, long r)
{
 if(p<r)
 {
  long q = (p+r)/2;
  merge_sort(arr,p,q);       
  merge_sort(arr,q+1,r);       
  merge(arr,p,q,r);
 }    
}


int main()
{
 int t;
 char a;
 long long int n,i;
 long arr[200002];
 scanf("%d",&t);
 while(t--)
 {
  scanf("%lld",&n);
  for(i=0;i<n;i++)
  scanf("%lld",&arr[i]);
  merge_sort(arr,0,n-1);
  cout<<inversion_count<<"\n";
  inversion_count=0;
 }    
return 0;    
}
