int main()
     {
           int t;
           long long n,s;
        scanf("%d",&t);
        while(t--)
        {
         scanf("%lld",&n);
         s=(3*n*n+n)/2;
         s=s%1000007;
        printf("%lld\n",s);
        }
     return 0;
     }
