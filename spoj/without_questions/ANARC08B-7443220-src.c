#include<stdio.h>

int main()
{
char a[100],b[100];
long long int x,y,z,i,c,v,j,r;
a[0]=1;
while(scanf("%s",a),a[0]!='B')
{
x=0;i=0;
while(a[i]!='+')
{
if((a[i]=='0')&&(a[i+1]=='1')&&(a[i+2]=='0')) x=x*10+1;   
else if((a[i]=='0')&&(a[i+1]=='6')&&(a[i+2]=='3')) x=x*10+0;
else if((a[i]=='0')&&(a[i+1]=='9')&&(a[i+2]=='3')) x=x*10+2;
else if((a[i]=='0')&&(a[i+1]=='7')&&(a[i+2]=='9')) x=x*10+3;
else if((a[i]=='1')&&(a[i+1]=='0')&&(a[i+2]=='6')) x=x*10+4;
else if((a[i]=='1')&&(a[i+1]=='0')&&(a[i+2]=='3')) x=x*10+5;
else if((a[i]=='1')&&(a[i+1]=='1')&&(a[i+2]=='9')) x=x*10+6;
else if((a[i]=='0')&&(a[i+1]=='1')&&(a[i+2]=='1')) x=x*10+7;
else if((a[i]=='1')&&(a[i+1]=='2')&&(a[i+2]=='7')) x=x*10+8;
else if((a[i]=='1')&&(a[i+1]=='0')&&(a[i+2]=='7')) x=x*10+9;
i+=3;
}i++;
y=0;
while(a[i]!='=')
{
if((a[i]=='0')&&(a[i+1]=='1')&&(a[i+2]=='0')) y=y*10+1;   
else if((a[i]=='0')&&(a[i+1]=='6')&&(a[i+2]=='3')) y=y*10+0;
else if((a[i]=='0')&&(a[i+1]=='9')&&(a[i+2]=='3')) y=y*10+2;
else if((a[i]=='0')&&(a[i+1]=='7')&&(a[i+2]=='9')) y=y*10+3;
else if((a[i]=='1')&&(a[i+1]=='0')&&(a[i+2]=='6')) y=y*10+4;
else if((a[i]=='1')&&(a[i+1]=='0')&&(a[i+2]=='3')) y=y*10+5;
else if((a[i]=='1')&&(a[i+1]=='1')&&(a[i+2]=='9')) y=y*10+6;
else if((a[i]=='0')&&(a[i+1]=='1')&&(a[i+2]=='1')) y=y*10+7;
else if((a[i]=='1')&&(a[i+1]=='2')&&(a[i+2]=='7')) y=y*10+8;
else if((a[i]=='1')&&(a[i+1]=='0')&&(a[i+2]=='7')) y=y*10+9;
i+=3;
}i++;

z=x+y;r=0;c=0;
printf("%s",a);
while(z!=0)
{v=z%10;if((v==0)&&(r==0))c++;z=z/10;r=r*10+v;}
while(r!=0)
{ v=r%10;r=r/10;
 if(v==0) printf("063");
 else if(v==1) printf("010");
 else if(v==2) printf("093");
 else if(v==3) printf("079");
 else if(v==4) printf("106");
 else if(v==5) printf("103");
 else if(v==6) printf("119");
 else if(v==7) printf("011");
 else if(v==8) printf("127");
 else if(v==9) printf("107");       
}
while(c--){printf("063");}
printf("\n");
}
return 0;
}
