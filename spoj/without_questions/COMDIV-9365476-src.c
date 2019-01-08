#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int gcd(int a,int b)
{
    int temp;
    while(a%b!=0)
    {
        temp=a;
        a=b;
        b=temp%b;
    }
    return b;
}

int main()
{
    int t,a,b,x,y,val,i,sqt,cnt;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&a,&b);
        if(a>b) {x=a;y=b;}
        else {x=b;y=a;}
        val=gcd(a,b);
        sqt=sqrt(val);
        cnt=1;
        for(i=2;i<=sqt;i++)
        {
            if(val%i==0) cnt++;
        }
        cnt*=2;
        if(sqt*sqt==val) cnt--;
        printf("%d\n",cnt);
    }
    return 0;
}
