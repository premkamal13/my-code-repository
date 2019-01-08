main(){int a,b,t,c;scanf("%d",&t);while(t--){scanf("%*d%*d%d%*d%*d%d",&a,&b);c=a*a-b*b;c=c>0?c:-c;printf("%.2f\n", 3.141592653589793238462643383279*(double)c);}return 0;}
