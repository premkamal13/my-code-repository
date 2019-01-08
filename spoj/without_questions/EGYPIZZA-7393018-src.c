#include<stdio.h>

int main()
{
 int t,h=0,s=0,q=0,r=0,m,k,i=0;
 int a[10001][2];
 scanf("%d",&t);
    while(t--)
          {
             scanf("%d/%d",&a[i][0],&a[i][1]);
             if(a[i][1]==2) h++;
             else if(a[i][0]==3) q++;
             else r++;
             i++;  
                        
          }
          k=q-r;
          if(k>=0) {s=h/2+q; if(h%2!=0) s+=1;}
          else
          {
            k=(-1)*k;
            if(h%2!=0)
            {
              
              if(k>=2) k-=2;
              else if(k==1) k=0;
              s++;
            }
            s+=h/2+k/4+q;
            if(k%4!=0) s+=1;
          }
 printf("%d\n",s+1);
 
return 0; 
}
