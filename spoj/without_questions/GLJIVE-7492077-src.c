int main()
{
int a[11],i,s=0;
for(i=0;i<10;i++){scanf("%d",&a[i]);}
i=0; 
while((i<10)&&(s<=100)) {s+=a[i];i++;}
if((s-100)>(100-s+a[i-1])) s-=a[i-1];
else ; 
printf("%d\n",s); 
return 0; 
}
