#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int a,n;
char b[300];
int rem()
{
    int x,i;
    x=b[0]-48;
    for(i=1;i<n;i++)
    {
        x=x*10+(b[i]-48);
        x=x%a;
    }
    return x;
}

int gcd(int k,int l)
{
if(k%l==0) return l;
else return gcd(l,k%l);
}
int main()
{
    int t,val,p;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %s",&a,b);
             n=strlen(b);
             if(a==0) printf("%s\n",b);
             else{
                   val=rem();
                   if(val==0) p=a;
                   else p=gcd(a,val);
                   printf("%d\n",p);
                 }
    }
return 0;
}
