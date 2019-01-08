main(){int n,s,i,t;scanf("%d",&t);while(t--){scanf("%d",&n);s=1;for(i=1;i<=n;i++)s=s*(2*n-i+1)/i;printf("%d\n",s);}}
