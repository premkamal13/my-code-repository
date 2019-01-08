
int main()
{
int x,l,y,d,m,r,k,j,n;
char *p[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
scanf("%d",&n);while(n--){scanf("%d",&x);j=k=l=d=m=y=0;
while(x)
{
r=x%2;
(j<5)?(d+=r*pow(2,j++)):((k<4)?(m+=r*pow(2,k++)):(y+=r*pow(2,l++)));
x/=2;
}
printf("%d %s %d\n",d,p[m-1],y);}
return 0;
}
