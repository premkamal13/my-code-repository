int main()
{
long long int a,b,c,t,m,x,y,temp;
scanf("%lld",&t);
while(t--)
{
 scanf("%lld %lld",&a,&b);
 if(a>0)x=a;else x=-a;if(b>0)y=b; else y=-b;
 if(x<y){temp=x;x=y;y=temp;}
 while(x%y!=0)
            {
             temp=x%y;
             x=y;
             y=temp; 
              } 
   m=a-b;
   if(m<0) {m*=-1;}
   printf("%lld\n",(m/y));         
}
return 0;
}    
