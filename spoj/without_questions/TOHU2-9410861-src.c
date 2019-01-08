#include<stdio.h>
#include<stdlib.h>
char ch[101],c;
int main()
{
    int t,i,err,a;
    scanf("%d",&t);
    while(t--)
    {
        for(i=1;i<10;i++) scanf("%d %c",&a,&c);
        char chk=c;
        err=0;
        for(i=10;i<100;i++)scanf("%d %c",&a,&ch[i]);
        for(i=18;i<82;i+=9)
        {
            if(ch[i]!=chk) err=1;
        }
        if(err) printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}
