main(void){long long t,i,p,q,a,s;scanf("%lld",&t);while(t--){scanf("%lld",&a);i=p=q=0;while(a--){scanf("%lld",&s);++i;if(i%2==0){if(s>0)p+=s;}else if(s<0)q+=s;}if(p<-q)printf("Every Girl Lies!\n");else printf("Some Mirrors Lie!\n");}}

