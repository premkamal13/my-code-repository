#include<stdio.h>
#include<stdlib.h>
#define nmax 10000000
int a[10001],pl[1001][1001];

int play(int x,int y,int f)
{
    int s,op1,op2;

    //if(pl[x][y]!=1000000) return pl[x][y];
    if(x<0 || y<0) return 0;
    if(pl[x][y]!= nmax) return pl[x][y];
    if(x>y) s=0;
    else if(f)
    {
        op1=a[y] + play(x,y-1,1-f);
        op2=a[x] + play(x+1,y,1-f);
        if(op1>op2) s=op1;
        else s=op2;
    }
    else
    {
        if(a[x]>=a[y]) s=play(x+1,y,1-f)-a[x];
        else s=play(x,y-1,1-f)-a[y];
    }
    pl[x][y]=s;
    return pl[x][y];
}

int main()
{
    int k=1,i,j,n;
    //freopen("C:\\Users\\lovelotus\\Desktop\\input.txt","r",stdin);
    //freopen("C:\\Users\\lovelotus\\Desktop\\output.txt","w",stdout);
    while(scanf("%d",&n),n!=0)
    {
        for(i=0;i<n;i++) {scanf("%d",&a[i]); }
       //for(i=0;i<n;i++) printf("%d\n",a[i]);
        for(i=0;i<n;i++) for(j=0;j<n;j++) {pl[i][j]=nmax;}
        printf("In game %d, the greedy strategy might lose by as many as %d points.\n",k++,play(0,n-1,1));
    }
    return 0;
}
