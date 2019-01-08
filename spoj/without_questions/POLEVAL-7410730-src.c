int main()
    {
         int p,n,m,t,i,l,f=1;
         int a[1000],b[1000],k;
         long long int s;
         while(scanf("%d",&n),n!=-1)
         {
             m=n;
             while(n>=0)
             {
               scanf("%d",&a[n--]);
             }
               scanf("%d",&t);
               i=0;
               while(t--)
                  {
                      scanf("%d",&b[i++]);
                  }
                     printf("Case %d:\n",f);f++;
                      for(l=0;l<i;l++)
                      {
                      s=0;k=0;p=1;
                      while(k<=m)
                      { 
                      s=s+(p*a[k++]);
                      p=p*b[l];
                      }
                     printf("%lld\n",s); 
                     }    
                                       
         }
   return 0;
    }
