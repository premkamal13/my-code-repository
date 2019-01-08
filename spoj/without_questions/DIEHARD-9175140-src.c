#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t,h,a,c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&h,&a);
        c=0;
        while(a>0 && h>0)
        {
            h+=3;a+=2;
            c+=1;
            if(h>5 && a>10)
            {
                h-=5;a-=10;
                c+=1;
            }
            else
            {
                h-=20;a+=5;
                c+=1;
            }
        }
        printf("%d\n",c-1);
    }
    return 0;
}
