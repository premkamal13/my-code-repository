#include<stdio.h>
#include<stdlib.h>
#define M mouse
#define C cats
int min(int a,int b) {return a<b?a:b;}
int max(int a,int b) {return a>b?a:b;}

struct dist
{
    int top,bottom,left,right;
}C,M;

int main()
{
    int n,m,t,mi,mj,ci,cj,di,dj;
    scanf("%d%d",&n,&m);
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&mi,&mj);
        scanf("%d %d",&ci,&cj);
        scanf("%d %d",&di,&dj);
        M.top=mi-1; M.bottom=n-mi;
        M.left=mj-1; M.right=m-mj;
        int h1=cj-mj>0?cj-mj:mj-cj;
        int h2=dj-mj>0?dj-mj:mj-dj;
        int v1=ci-mi>0?ci-mi:mi-ci;
        int v2=di-mi>0?di-mi:mi-di;
        C.top=min(ci-1+h1,di-1+h2); C.bottom=min(n-ci+h1,n-di+h2);
        C.left=min(cj-1+v1,dj-1+v2); C.right=min(m-cj+v1,m-dj+v2);
        if(M.top<C.top || M.bottom<C.bottom || M.left<C.left || M.right<C.right) printf("YES\n");
        else printf("NO\n");
        //printf("(%d %d %d %d)\n",M.top,M.bottom,M.left,M.right);
        //printf("(%d %d %d %d)\n",C.top,C.bottom,C.left,C.right);
    }
    return 0;
}
