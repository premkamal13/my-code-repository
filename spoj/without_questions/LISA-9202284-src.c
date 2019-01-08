#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

char str[5001],op[5001];
int a[5001],j,k;
long long int val,int_max=4000000000000000001;
long long int dp1[2502][2502],dp2[2502][2502];

long long int func(long long int a1,long long int a2,char a3)
{
    if(a3=='*') return a1*a2;
    else return a1+a2;
}

long long int minval()
{
    int p,l,q,m;
    for(p=0;p<j;p++)
    {
        dp1[p][p]=a[p];
        //printf("%lld ",dp1[p][p]);
    }
    //printf("equals done\n");
    for(l=2;l<=j;l++)
    {
        for(p=0;p<j-l+1;p++)
        {
            q=p+l-1;
            dp1[p][q]=int_max;
            for(m=p;m<q;m++)
            {
                val=func(dp1[p][m],dp1[m+1][q],op[m]);
                if(val<dp1[p][q]) dp1[p][q]=val;
            }
        }
    }
    return dp1[0][j-1];
}

long long int maxval()
{
    int p,l,q,m;
    for(p=0;p<=j;p++)
    {
        dp2[p][p]=a[p];
    }
    for(l=2;l<=j;l++)
    {
        for(p=0;p<j-l+1;p++)
        {
            q=p+l-1;
            dp2[p][q]=-1;
            for(m=p;m<q;m++)
            {
                val=func(dp2[p][m],dp2[m+1][q],op[m]);
                if(val>dp2[p][q]) dp2[p][q]=val;
            }
        }
    }
    return dp2[0][j-1];
}
int main()
{
    int t,i,x,i1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",str);
        x=strlen(str);
        k=0;
        j=1;
        a[0]=str[0]-48;
        for(i=1;i<x;i+=2)
        {
            op[j-1]=str[i];
            a[j++]=(int)str[i+1]-48;
        }
        //for(i=0;i<j-1;i++) printf("%lld\n",func(a[i],a[i+1],op[i]));
        printf("%lld %lld\n",maxval(),minval());
        //for(i=0;i<j;i++) {for(i1=0;i1<j;i1++) printf("%lld ",dp1[i][i1]); printf("\n");}
        //for(i=0;i<j;i++) {for(i1=0;i1<j;i1++) printf("%lld ",dp2[i][i1]); printf("\n");}
    }
    return 0;
}
