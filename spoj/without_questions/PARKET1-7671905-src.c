int main()
{   long long int r,b,x,y,d,a,k,i;
    scanf("%lld %lld",&r,&b);
      d= sqrt((r+4)*(r+4)-(r+b)*16);
      a=(r+4+d)/4;
      k=(r+4-d)/4;
      printf("%lld %lld",a,k);
return 0;
    }
