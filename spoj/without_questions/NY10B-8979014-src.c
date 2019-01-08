#include<stdio.h>
#include<stdlib.h>

int r1[200001],r2[200001],r3[200001];

int max(int l,int m)
{
    return (l>m?l:m);
}

int min(int l,int m)
{
    return (l<m?l:m);
}
int main()
{
    int t,cs,a,b,n,i,j,x,y,k,p,s1,rem;
    int s,b1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d %d",&cs,&n,&a,&b);
        x=max(a,b);
        y=min(a,b);
        j=0;
        while(x!=0)
        {
            rem=x%n;
            r1[j++]=rem;
            x=x/n;
        }
        //for(i=0;i<j;i++) printf("%c",r1[i]);
        //printf("\n");
        i=0;
        while(y!=0)
        {
            rem=y%n;
            r2[i++]=rem;
            y=y/n;
        }
        while(i<j) r2[i++]=0;
        //for(i=0;i<j;i++) printf("%c",r2[i]);printf("\n");
        p=s=0;
        for(k=0;k<j;k++)
        {
            s1=((r1[k]+r2[k]))%n;
            r3[k]=s1;
        }
        //for(i=0;i<k;i++) printf("%c",r3[i]);
        //printf("\nololo\n");
        s=0;
        b1=1;
        for(i=0;i<k;i++) {s=s+(r3[i]*b1); b1=b1*n;}
        printf("%d %d\n",cs,s);
    }
    return 0;
}
