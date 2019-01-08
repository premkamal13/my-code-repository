#include<stdio.h>
#include<stdlib.h>

int a[100][2];

int main()
{
    int x1,y1,x2,y2,t,i,j,nv,ns,c,x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&nv,&ns);
        for(i=0;i<nv;i++)
        {
           scanf("%d %d",&a[i][0],&a[i][1]);
           //printf("ololo\n");
        }
        for(i=0;i<ns;i++)
        {
            scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
            c=0;
            for(j=0;j<nv;j++)
            {
                x=a[j][0];
                y=a[j][1];
                if((x>=x1&&y>=y1&&x<=x2&&y<=y2)||(x<=x1&&y<=y1&&x>=x2&&y>=y2)||(x>=x1&&y<=y1&&x<=x2&&y>=y2)||(x<=x1&&y>=y1&&x>=x2&&y<=y2))
                {
                    if(((x-x1)*(y-y2))==((x-x2)*(y-y1)))
                    c++;
                }
            }
            printf("%d\n",c);
        }
    }
    return 0;
}
