#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t,n,m1,m2,m3,p;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        if(n==1) printf("poor conductor\n");
        else
        {
            n-=2;
            m1=n/5;
            m2=n%5;
            m3=m1%2;
            if(m3==0) p=m2;
            else p=4-m2;
            printf("%d ",m1+1);
            switch(p)
            {
              case 0: printf("W L\n"); break;
              case 1: printf("A L\n"); break;
              case 2: printf("A R\n"); break;
              case 3: printf("M R\n"); break;
              case 4: printf("W R\n"); break;
            }
        }
    }
    return 0;

}
