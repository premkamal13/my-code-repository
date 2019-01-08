#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char s1[1001],s2[1001],a[1001],b[1001],c[1001],c1[1001],op[2],p,q;
long long int i,x,y,k,l,x1,x2,res,m,t,count;

int main()
{
    while(scanf("%s %s %s",s1,op,s2)!=EOF)
    {
        x=strlen(s1);
        y=strlen(s2);
        //printf("(%s)(%s)(%lld)(%lld)",s1,s2,x,y);
        k=0;
        i=0;
        while(i<x)
        {
            p=s1[i]-48;
            q=s1[i+1];
            while(p--)
            {
                a[k++]=q;
            }
            i+=2;
        }
        //for(i=0;i<k;i++) printf("%c",a[i]); printf("\n");
        l=0;
        i=0;
        while(i<y)
        {
            p=s2[i]-48;
            q=s2[i+1];
            while(p--)
            {
                b[l++]=q;
            }
            i+=2;
        }
        //for(i=0;i<l;i++) printf("%c",b[i]); printf("\n");
        x1=x2=0;
        for(i=0;i<k;i++)
        {
            x1=x1*10+(a[i]-48);
            //printf("<%d>\n",a[i]);
        }
        for(i=0;i<l;i++)
        {
            x2=x2*10+b[i]-48;
        }
        //printf("(%lld)\n",x1);
        //printf("(%lld)\n",x2);
        //printf(">%c<",op[0]);
        switch(op[0])
        {
            case '+': res=x1+x2;break;
            case '-': res=x1-x2;break;
            case '*': res=x1*x2;break;
            case '/': res=x1/x2;break;
        }
        m=0;
       // printf("%lld\n",res);
        if(res==0) {c[0]=48;m=1;}
        while(res!=0)
        {
            x=res%10;
            res=res/10;
            c[m++]=(char)(x+48);
        }
       // for(i=0;i<m;i++) printf("%c",c[i]);
        l=m-1;
        t=0;
        while(l>=0)
        {
            p=c[l];
            l--;
            count=1;
            if(l>=0)
            {
                while(c[l]==p)
                {
                    count+=1;
                    l--;
                    if(count>=9) break;
                    if(l<0) break;
                }
            }
            c1[t++]=count+48;
            c1[t++]=p;
        }
        printf("%s %c %s = ",s1,op[0],s2);
       for(i=0;i<t;i++)
       {
           printf("%c",c1[i]);
       }
       printf("\n");
    }
    return 0;
}
